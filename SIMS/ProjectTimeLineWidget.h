#pragma once

#include <QWidget>
#include "ui_ProjectTimeLineWidget.h"

class ProjectTimeLineWidget : public QWidget
{
	Q_OBJECT

public:
	ProjectTimeLineWidget(QString time, QString content, QWidget *parent = Q_NULLPTR);
	~ProjectTimeLineWidget();

private:
	Ui::ProjectTimeLineWidget ui;
	QString m_time;
	QString m_content;
};
