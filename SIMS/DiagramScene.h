#pragma once

#include <QDebug>
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include "DiagramItem.h"
#include "DiagramArrow.h"

class DiagramScene : public QGraphicsScene
{
	Q_OBJECT

public:
	enum Mode { InsertItem, InsertLine, InsertText, MoveItem };

	DiagramScene(QObject *parent = nullptr);
	~DiagramScene();

public slots:
	void setMode(Mode mode);
	void setItemType(DiagramItem::DiagramType type);

signals:
	void itemInserted(DiagramItem *item);
	void textInserted(QGraphicsTextItem *item);
	void itemSelected(DiagramItem *item);

protected:
	void mousePressEvent(QGraphicsSceneMouseEvent *mouseEvent) override;
	void mouseMoveEvent(QGraphicsSceneMouseEvent *mouseEvent) override;
	void mouseReleaseEvent(QGraphicsSceneMouseEvent *mouseEvent) override;

private:
	//≤Â»Îƒ£ Ω
	Mode m_mode;
	DiagramItem::DiagramType m_ItemType;
	
	QGraphicsLineItem * m_line;

	QColor m_ItemColor;
	QColor m_LineColor;
};
