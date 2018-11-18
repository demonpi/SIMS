#include "DatabaseOperate.h"

DatabaseOperate* DatabaseOperate::m_singleton = nullptr;

DatabaseOperate * DatabaseOperate::getInstance()
{
	if (m_singleton == __nullptr)
	{
		m_singleton = new DatabaseOperate();
	}
	return m_singleton;
}

DatabaseOperate::DatabaseOperate()
{
	//TODO:由数据库控制类读入配置文件


}


DatabaseOperate::~DatabaseOperate()
{
}

bool DatabaseOperate::connect()
{
	m_db.setHostName("localhost");
	m_db.setPort(3306);
	m_db.setDatabaseName("SIMS");    
	m_db.setUserName("root");
	m_db.setPassword("root");  
	if (!m_db.open()) {
		QMessageBox::critical(0, QStringLiteral("无法打开数据库"), 	QStringLiteral("无法创建数据库连接！"), QMessageBox::Cancel);
	}
	else 
	{
		return true;
	}
}

QSqlQuery DatabaseOperate::exec(QString query)
{
	return m_db.exec(query);
}

QSqlDatabase DatabaseOperate::getDB()
{
	return this->m_db;
}
