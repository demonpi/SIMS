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
	if (mouseEvent->button() != Qt::LeftButton)
		return;

	//在画布上创建对象
	DiagramItem *item;

	switch (m_mode) {
		case InsertItem:
			item = new DiagramItem(m_ItemType);
			item->setBrush(m_ItemColor);
			addItem(item);
			item->setPos(mouseEvent->scenePos());
			emit itemInserted(item);
			break;
		case InsertLine:
			m_line = new QGraphicsLineItem(QLineF(mouseEvent->scenePos(),
				mouseEvent->scenePos()));
			m_line->setPen(QPen(m_LineColor, 2));
			addItem(m_line);
			break;
		default:
			;
	}

	QGraphicsScene::mousePressEvent(mouseEvent);
}
