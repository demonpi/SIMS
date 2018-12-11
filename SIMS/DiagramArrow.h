#pragma once

#include <QGraphicsLineItem>
#include <qmath.h>
#include "DiagramItem.h"

class DiagramArrow : public QGraphicsLineItem
{
public:

	DiagramArrow(DiagramItem *startItem, DiagramItem *endItem,
		QGraphicsItem *parent = 0);

	int type() const override { return Type; }
	QRectF boundingRect() const override;
	QPainterPath shape() const override;
	void setColor(const QColor &color) { myColor = color; }
	DiagramItem *startItem() const { return myStartItem; }
	DiagramItem *endItem() const { return myEndItem; }

	void updatePosition();

protected:
	void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = 0) override;

private:
	DiagramItem *myStartItem;
	DiagramItem *myEndItem;
	QColor myColor;
	QPolygonF arrowHead;
};
