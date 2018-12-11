#include "DiagramItem.h"

DiagramItem::DiagramItem(DiagramType type, QGraphicsItem *parent)
	: QGraphicsPolygonItem(parent)
{
	m_type = type;
	QPainterPath path;
	switch (m_type) 
	{
		case Software:
			m_Polygon << QPointF(-100, -100) << QPointF(100, -100) 	<< QPointF(100, 100)
				<< QPointF(-100, 100)	<< QPointF(-100, -100);
			break;
		case Connect1553B:
			m_Polygon << QPointF(-100, 100) << QPointF(100, -100);
			break;
		case ConnectRS422:
			m_Polygon << QPointF(-50, 100) << QPointF(100, -50);
			break;
		default:
			m_Polygon << QPointF(-120, -80) << QPointF(-70, 80) << QPointF(120, 80) << QPointF(70, -80)
				<< QPointF(-120, -80);
			break;
	}
	setPolygon(m_Polygon);
	setFlag(QGraphicsItem::ItemIsMovable, true);
	setFlag(QGraphicsItem::ItemIsSelectable, true);
	setFlag(QGraphicsItem::ItemSendsGeometryChanges, true);
}

DiagramItem::~DiagramItem()
{
}

QPixmap DiagramItem::image() const
{
	QPixmap pixmap(250, 250);
	pixmap.fill(Qt::transparent);
	QPainter painter(&pixmap);
	painter.setPen(QPen(Qt::black, 8));
	painter.translate(125, 125);
	painter.drawPolyline(m_Polygon);

	return pixmap;
}

int DiagramItem::type() const
{
	return Type;
}

void DiagramItem::addArrow(DiagramArrow * arrow)
{
	m_arrows.append(arrow);
}

QVariant DiagramItem::itemChange(GraphicsItemChange change, const QVariant &value)
{
	if (change == QGraphicsItem::ItemPositionChange) {
	}

	return value;
}