#pragma once

#include <QGraphicsScene>
#include <DiagramItem.h>

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

};
