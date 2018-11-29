#include "DiagramScene.h"

DiagramScene::DiagramScene(QObject *parent)
	: QGraphicsScene(parent)
{
	//默认的状态是移动对象
	m_mode = MoveItem;

	//默认颜色
	m_ItemColor = Qt::white;
	m_LineColor = Qt::black;
}

DiagramScene::~DiagramScene()
{
}

void DiagramScene::setMode(Mode mode)
{
	m_mode = mode;
}

void DiagramScene::setItemType(DiagramItem::DiagramType type) 
{
	m_ItemType = type;
}

void DiagramScene::mousePressEvent(QGraphicsSceneMouseEvent *mouseEvent)
{
	//首先进行左右键判定
	if (mouseEvent->button() != Qt::LeftButton)
		return;

	//在画布上创建对象
	DiagramItem * item;

	switch (m_mode) {
		case InsertItem:
			item = new DiagramItem(m_ItemType);
			item->setBrush(m_ItemColor);
			addItem(item);
			item->setPos(mouseEvent->scenePos());
			emit itemInserted(item);
			break;
		case InsertLine:
			m_line = new QGraphicsLineItem(QLineF(mouseEvent->scenePos(),	mouseEvent->scenePos()));
			m_line->setPen(QPen(m_LineColor, 2));
			addItem(m_line);
			break;
		default:
			;
	}

	QGraphicsScene::mousePressEvent(mouseEvent);
}

void DiagramScene::mouseReleaseEvent(QGraphicsSceneMouseEvent *mouseEvent)
{
	QGraphicsScene::mouseReleaseEvent(mouseEvent);
}

void DiagramScene::mouseMoveEvent(QGraphicsSceneMouseEvent *mouseEvent)
{
	if (m_mode == InsertLine && m_line != 0) {
		QLineF newLine(m_line->line().p1(), mouseEvent->scenePos());
		m_line->setLine(newLine);
	}
	else if (m_mode == MoveItem) {
		QGraphicsScene::mouseMoveEvent(mouseEvent);
	}
}
