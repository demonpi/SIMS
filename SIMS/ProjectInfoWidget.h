#pragma once

#include <QWidget>
#include "ui_ProjectInfoWidget.h"
#include "ProjectTimeLineWidget.h"
#include "DatabaseOperate.h"

class ProjectInfoWidget : public QWidget
{
	Q_OBJECT

public:
	ProjectInfoWidget(QString projectName, QWidget *parent = Q_NULLPTR);
	~ProjectInfoWidget();

private:
	void refreshInfo();
	void refreshTimeline();

	Ui::ProjectInfoWidget ui;
	QString m_projectName;
	DatabaseOperate* m_connect;
};
