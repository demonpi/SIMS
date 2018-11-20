#pragma once

#include <QWidget>
#include "ui_ProjectInfoWidget.h"
#include "ProjectTimeLineWidget.h"

class ProjectInfoWidget : public QWidget
{
	Q_OBJECT

public:
	ProjectInfoWidget(QWidget *parent = Q_NULLPTR);
	~ProjectInfoWidget();

private:
	Ui::ProjectInfoWidget ui;
};
