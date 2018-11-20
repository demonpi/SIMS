#pragma once

#include <QWidget>
#include "ui_ProjectDataStreamWidget.h"

class ProjectDataStreamWidget : public QWidget
{
	Q_OBJECT

public:
	ProjectDataStreamWidget(QWidget *parent = Q_NULLPTR);
	~ProjectDataStreamWidget();

private:
	Ui::ProjectDataStreamWidget ui;
};
