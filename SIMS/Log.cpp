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
	//д�����ݿ�
	QString datetime = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
	QString operate = QStringLiteral("������Ŀ");	
	QString query = QString("INSERT INTO `sims`.`log`(`log_time`, `log_username`, `log_operate`, `log_project`) VALUES('%1', '%2', '%3', '%4')").arg(datetime).arg(m_username).arg(operate).arg(projectName);
	DatabaseOperate::getInstance()->exec(query);	
}

void Log::setUserName(QString userName)
{
	this->m_username = userName;
}

bool Log::addEvent(QString projectName, QString event)
{
	QString datetime = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
	QString operate = QStringLiteral("����¼�");
	QString result = event;
	QString query = QString("INSERT INTO `sims`.`log`(`log_time`, `log_username`, `log_operate`, `log_project`, `log_result`) VALUES('%1', '%2', '%3', '%4', '%5')")
		.arg(datetime).arg(m_username).arg(operate).arg(projectName).arg(result);
	DatabaseOperate::getInstance()->exec(query);
	//�ж��Ƿ����ɹ�
	if (DatabaseOperate::getInstance()->getDB().lastError().type() == QSqlError::NoError)
	{
		return true;
	}
	else
	{
		return false;
	}
}

Log* Log::getInstance()
{
	if (m_singleton == nullptr)
	{
		m_singleton = new Log();
	}
	return	m_singleton;
}
