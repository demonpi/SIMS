#pragma once

#include <QDialog>
#include <QMessageBox>
#include "ui_ProjectAdd.h"
#include "DatabaseOperate.h"
#include "Log.h"

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
