#pragma once

#include <QWidget>
#include <QSqlQueryModel>
#include "ui_ProjectSoftwareWidget.h"
#include "DatabaseOperate.h"

class ProjectSoftwareWidget : public QWidget
{
	Q_OBJECT

public:
	ProjectSoftwareWidget(QString name, QWidget *parent = Q_NULLPTR);
	~ProjectSoftwareWidget();

private:
	Ui::ProjectSoftwareWidget ui;
	QString m_projectName;
	QSqlQueryModel* m_model;
};
