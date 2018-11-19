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
	//显示选择型号界面
	m_projectList->show();
}
