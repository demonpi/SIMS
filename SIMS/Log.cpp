#include "Log.h"

Log* Log::m_singleton = nullptr;

Log::Log(QObject *parent)
	: QObject(parent)
{
}

Log::~Log()
{
}

void Log::addProject(QString projectName) 
{
	//写入数据库
	QString datetime = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
	QString operate = QStringLiteral("增加项目");	
	QString query = QString("INSERT INTO `sims`.`log`(`log_time`, `log_username`, `log_operate`, `log_project`) VALUES('%1', '%2', '%3', '%4')").arg(datetime).arg(m_username).arg(operate).arg(projectName);
	DatabaseOperate::getInstance()->exec(query);	
}

void Log::setUserName(QString userName)
{
	this->m_username = userName;
}

Log* Log::getInstance()
{
	if (m_singleton == nullptr)
	{
		m_singleton = new Log();
	}
	return	m_singleton;
}
