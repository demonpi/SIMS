#pragma once

#include <QDialog>
#include <QMessageBox>
#include "ui_ProjectAdd.h"
#include "DatabaseOperate.h"

class ProjectAdd : public QDialog
{
	Q_OBJECT

public:
	ProjectAdd(QWidget *parent = Q_NULLPTR);
	~ProjectAdd();
private slots:
	void addProjcet();
private:
	Ui::ProjectAdd ui;
};
