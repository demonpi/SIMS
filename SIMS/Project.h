#pragma once
/**
��Ŀ���ͺţ�������
*/
#include <QObject>
#include "ProjectList.h"

class Project : public QObject
{
	Q_OBJECT

public:
	Project(QObject *parent);
	~Project();

	//���action����Ӧ
	void show();
private:
	ProjectList* m_projectList;
};
