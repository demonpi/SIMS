#pragma once

#include <QWidget>
#include <QGridLayout>
#include <QToolButton>
#include <QLabel>
#include <QButtonGroup>
#include "ui_ProjectDataStreamWidget.h"
#include "DiagramItem.h"
#include "DiagramScene.h"


class ProjectDataStreamWidget : public QWidget
{
	Q_OBJECT

public:
	ProjectDataStreamWidget(QWidget *parent = Q_NULLPTR);
	~ProjectDataStreamWidget();

private slots:
	void buttonGroupClicked(int id);
	void itemInserted(DiagramItem *item);
	void itemSelected(DiagramItem *item);

private:
	void createToolBox();
	//创建左侧列表中的图例
	QWidget *createCellWidget(const QString &text,	DiagramItem::DiagramType type);


	Ui::ProjectDataStreamWidget ui;
	DiagramScene * m_scene;
	//界面左侧的所有button
	QButtonGroup * m_buttonGroup;
};
