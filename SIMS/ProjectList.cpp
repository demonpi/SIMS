#include "ProjectList.h"

ProjectList::ProjectList(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.name_LE, SIGNAL(textChanged(QString)), this, SLOT(filtrate(QString)));
	connect(ui.add_PB,   SIGNAL(clicked()),                      this, SLOT(addProject()));
	connect(ui.open_PB, SIGNAL(clicked()),                      this, SLOT(openProject()));
	//设置modal
	this->setModal(true);
	//读取数据库
	DatabaseOperate* tempConnect = DatabaseOperate::getInstance();
	m_model = new QSqlQueryModel(this);
	m_model->setQuery(QString("SELECT `project_name` FROM project;"), tempConnect->getDB());
	//为界面设置model
	//使用QSortFilterProxyModel代理来进行数据筛选
	m_proxyModel = new QSortFilterProxyModel(this);
	m_proxyModel->setSourceModel(m_model);
	m_proxyModel->setFilterKeyColumn(0);
	ui.project_LV->setModel(m_proxyModel);
	ui.project_LV->setSelectionMode(QAbstractItemView::SingleSelection);
}

ProjectList::~ProjectList()
{
}

void ProjectList::filtrate(QString text)
{
	//仅进行文字筛选
	QRegExp::PatternSyntax syntax = QRegExp::PatternSyntax(QRegExp::FixedString);
	QRegExp regExp(text, Qt::CaseInsensitive, syntax);
	m_proxyModel->setFilterRegExp(regExp);
}

void ProjectList::showUP()
{
	m_model->setQuery(QString("SELECT `project_name` FROM project;"));
	this->show();
}

void ProjectList::addProject()
{
	this->close();
	//在添加项目处初始化一个项目窗口
	ProjectAdd* addProject = new ProjectAdd();
	connect(addProject, SIGNAL(rejected()), this, SLOT(showUP()));
	addProject->show();
}

void ProjectList::openProject()
{
	//获取当前选定的项目名称，并通过SIGNAL传出
	QItemSelectionModel * tempModel = ui.project_LV->selectionModel();
	QModelIndexList indexes = tempModel->selectedIndexes();
	this->close();
	emit projectOpened(indexes.first().data().toString());
}