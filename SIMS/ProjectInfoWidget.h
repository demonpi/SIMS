#pragma once

#include <QWidget>
#include "ui_ProjectInfoWidget.h"
#include "ProjectTimeLineWidget.h"
#include "DatabaseOperate.h"
#include "ProjectAddEvent.h"

class ProjectInfoWidget : public QWidget
{
	Q_OBJECT

public:
	ProjectInfoWidget(QString projectName, QWidget *parent = Q_NULLPTR);
	~ProjectInfoWidget();

public slots:
	void refreshInfo();
	void refreshTimeline();
	
private slots:
	void addEvent();

private:

	Ui::ProjectInfoWidget ui;
	QString m_projectName;
	DatabaseOperate* m_connect;
};
