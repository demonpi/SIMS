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

DiagramItem::DiagramType DiagramItem::diagramType() const
{
	return m_type;
}