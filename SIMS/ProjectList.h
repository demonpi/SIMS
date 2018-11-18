#pragma once

#include <QWidget>
#include <QSortFilterProxyModel>
#include "ui_ProjectList.h"
#include "DatabaseOperate.h"

class ProjectList : public QWidget
{
	Q_OBJECT

public:
	ProjectList(QWidget *parent = Q_NULLPTR);
	~ProjectList();

private slots:
	void filtrate(QString text);

private:
	Ui::ProjectList ui;
	//读取数据库中数据
	QSqlQueryModel* m_model;
	QSortFilterProxyModel* m_proxyModel;
};
