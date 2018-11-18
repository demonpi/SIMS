#pragma once
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>
#include <QSqlQueryModel>

class DatabaseOperate
{
public:
	static DatabaseOperate* getInstance();
	bool connect();
	QSqlQuery exec(QString query);
	QSqlDatabase getDB();

private:
	DatabaseOperate();
	~DatabaseOperate();

	static DatabaseOperate* m_singleton;
	QSqlDatabase m_db = QSqlDatabase::addDatabase("QMYSQL");
	QString m_hostname;
	QString m_databaseName;
	QString m_username;
	QString m_password;
};

