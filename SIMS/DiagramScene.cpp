#include "DiagramScene.h"

DiagramScene::DiagramScene(QObject *parent)
	: QGraphicsScene(parent)
{
	//Ĭ�ϵ�״̬���ƶ�����
	m_mode = MoveItem;

	//Ĭ����ɫ
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

	//�ڻ����ϴ�������
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
