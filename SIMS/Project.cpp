#include "Project.h"

Project::Project(QObject *parent)
	: QObject(parent)
{
}

Project::~Project()
{
}

void Project::show()
{
	m_projectList = new ProjectList();
	//��ʾѡ���ͺŽ���
	m_projectList->show();
}
