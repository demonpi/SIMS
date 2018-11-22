#pragma once

#include <QDialog>
#include "ui_ProjectAddEvent.h"
#include "Log.h"

class ProjectAddEvent : public QDialog
{
	Q_OBJECT

public:
	ProjectAddEvent(QString projectName, QWidget *parent = Q_NULLPTR);
	~ProjectAddEvent();

signals:
	void success();
private slots:
	void save();

private:
	Ui::ProjectAddEvent ui;
	QString m_projectName;
};
