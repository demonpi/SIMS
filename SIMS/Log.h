#pragma once

#include <QObject>
#include <QDateTime>
#include "DatabaseOperate.h"

class Log : public QObject
{
	Q_OBJECT

public:
	static Log* getInstance();

	void addProject(QString projectName);
	void setUserName(QString userName);

	bool addEvent(QString projectName, QString event);

private:
	Log(QObject *parent = nullptr);	
	~Log();

	static Log* m_singleton;
	QString m_username;
};
