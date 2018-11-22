#pragma once

#include <QObject>
#include <QDateTime>
#include "DatabaseOperate.h"

class Log : public QObject
{
	Q_OBJECT

public:
	void addProject(QString projectName);
	void setUserName(QString userName);
	static Log* getInstance();

private:
	Log(QObject *parent = nullptr);	
	~Log();

	static Log* m_singleton;
	QString m_username;
};
