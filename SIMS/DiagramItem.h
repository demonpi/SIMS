#pragma once

#include <QGraphicsPolygonItem>
#include <QPainter>

class DiagramItem : public QGraphicsPolygonItem
{

public:
	enum DiagramType {Software, Connect1553B, ConnectRS422, ConnectCAN, AssistLine, AssistSquare};

	DiagramItem(DiagramType type, QGraphicsItem *parent = nullptr);
	~DiagramItem();

	QPixmap image() const;

private:
	DiagramType m_type;
	QPolygonF m_Polygon;
};