#pragma once

#include <QWidget>
#include "ui_ProjectAdd.h"

class ProjectAdd : public QWidget
{
	Q_OBJECT

public:
	ProjectAdd(QWidget *parent = Q_NULLPTR);
	~ProjectAdd();

private:
	Ui::ProjectAdd ui;
};
