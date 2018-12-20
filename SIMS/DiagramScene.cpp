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
	//���Ƚ������Ҽ��ж�
	if (mouseEvent->button() != Qt::LeftButton)
		return;

	//�ڻ����ϴ�������
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

	//��ȡ����������
	if (selectedItems().count())
	{
		DiagramItem* tempItem = static_cast<DiagramItem*>(selectedItems().takeFirst());
		//����ǰitem�������ź��ͷų�ȥ
		emit itemSelected(tempItem);
	}

	QGraphicsScene::mousePressEvent(mouseEvent);
}

void DiagramScene::mouseReleaseEvent(QGraphicsSceneMouseEvent *mouseEvent)
{
	if (m_line != 0 && m_mode == InsertLine) {
		QList<QGraphicsItem *> startItems = items(m_line->line().p1());
		if (startItems.count() && startItems.first() == m_line)
			startItems.removeFirst();
		QList<QGraphicsItem *> endItems = items(m_line->line().p2());
		if (endItems.count() && endItems.first() == m_line)
			endItems.removeFirst();

		removeItem(m_line);
		delete m_line;

		if (startItems.count() > 0 && endItems.count() > 0 &&
			startItems.first()->type() == DiagramItem::Type &&
			endItems.first()->type() == DiagramItem::Type &&
			startItems.first() != endItems.first()) {
			DiagramItem *startItem = qgraphicsitem_cast<DiagramItem *>(startItems.first());
			DiagramItem *endItem = qgraphicsitem_cast<DiagramItem *>(endItems.first());
			DiagramArrow *arrow = new DiagramArrow(startItem, endItem);
			arrow->setColor(m_LineColor);
			startItem->addArrow(arrow);
			endItem->addArrow(arrow);
			arrow->setZValue(-1000.0);
			addItem(arrow);
			arrow->updatePosition();
		}
	}
	m_line = 0;
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
