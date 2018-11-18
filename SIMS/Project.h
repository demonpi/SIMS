#pragma once
/**
项目（型号）管理类
*/
#include <QObject>
#include "ProjectList.h"

class Project : public QObject
{
	Q_OBJECT

public:
	Project(QObject *parent);
	~Project();

	//点击action的响应
	void show();
private:
	ProjectList* m_projectList;
};
