#pragma once

#include <QWidget>
#include "ui_ProjectSoftwareWidget.h"

class ProjectSoftwareWidget : public QWidget
{
	Q_OBJECT

public:
	ProjectSoftwareWidget(QWidget *parent = Q_NULLPTR);
	~ProjectSoftwareWidget();

private:
	Ui::ProjectSoftwareWidget ui;
};
