#include "ProjectList.h"

ProjectList::ProjectList(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.name_LE, SIGNAL(textChanged(QString)), this, SLOT(filtrate(QString)));

	//��ȡ���ݿ�
	DatabaseOperate* tempConnect = DatabaseOperate::getInstance();
	m_model = new QSqlQueryModel(this);
	m_model->setQuery(QString("SELECT `name` FROM projectinfo_t;"), tempConnect->getDB());
	//Ϊ��������model
	//ʹ��QSortFilterProxyModel��������������ɸѡ
	m_proxyModel = new QSortFilterProxyModel(this);
	m_proxyModel->setSourceModel(m_model);
	m_proxyModel->setFilterKeyColumn(0);
	ui.project_LV->setModel(m_proxyModel);
}

ProjectList::~ProjectList()
{
}

void ProjectList::filtrate(QString text)
{
	QRegExp::PatternSyntax syntax = QRegExp::PatternSyntax(QRegExp::FixedString);
	QRegExp regExp(text, Qt::CaseInsensitive, syntax);
	m_proxyModel->setFilterRegExp(regExp);
}