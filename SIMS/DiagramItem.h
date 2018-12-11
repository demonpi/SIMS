#pragma once

#include <QGraphicsPolygonItem>
#include <QPainter>

//搞定循环引用
class DiagramArrow;

class DiagramItem : public QGraphicsPolygonItem
{

public:
	enum {Type = UserType + 15};
	enum DiagramType 
	{
		Software, 
		Connect1553B, 
		ConnectRS422,
		ConnectRS485,
		ConnectCAN, 
		ConnectTCP,
		ConnectUDP,
		ConnectFiber,	//光纤
		AssistLine, 
		AssistSquare
	};

	DiagramItem(DiagramType type, QGraphicsItem *parent = nullptr);
	~DiagramItem();

	DiagramType diagramType() const { return m_type; }
	QPixmap image() const;
	int type() const override;
	void addArrow(DiagramArrow *arrow);

protected:
	QVariant itemChange(GraphicsItemChange change, const QVariant &value) override;

private:
	DiagramType m_type;
	QPolygonF m_Polygon;
	QList<DiagramArrow *> m_arrows;
};
