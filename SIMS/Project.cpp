#include "Project.h"

Project::Project(QWidget *parent)
	: QWidget(parent)
{
	setParent(parent);
	ui.setupUi(this);
	m_centralWidget = static_cast<QWidget*>(this->parent());
	m_mainWidget = new QTabWidget(this);
}

Project::~Project()
{
}

void Project::show()
{
	m_projectList = new ProjectList();
	connect(m_projectList, SIGNAL(projectOpened(QString)), this, SLOT(openProject(QString)));
	//显示选择型号界面
	m_projectList->show();
}

void Project::openProject(QString name)
{
	//如果已打开，则先关闭所有tab页
	if (m_mainWidget->count() != 0)
	{
		m_mainWidget->clear();
	}
	//通过projectName初始化三个界面：基本信息、信息流、配套软件
	m_infoWidget            = new ProjectInfoWidget(name);
	m_dataStreamWidget = new ProjectDataStreamWidget();
	m_softwareWidget     = new ProjectSoftwareWidget(name);

	m_mainWidget->addTab(m_infoWidget,            QStringLiteral("基本信息"));
	m_mainWidget->addTab(m_dataStreamWidget, QStringLiteral("信息流"));
	m_mainWidget->addTab(m_softwareWidget,     QStringLiteral("配套软件信息"));
	
	//在主界面中加入
	m_centralWidget->layout()->addWidget(m_mainWidget);
}
