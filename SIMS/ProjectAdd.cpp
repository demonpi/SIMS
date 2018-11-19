#include "ProjectAdd.h"

ProjectAdd::ProjectAdd(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.add_PB, SIGNAL(clicked()), this, SLOT(addProjcet()));
}

ProjectAdd::~ProjectAdd()
{

}

void ProjectAdd::addProjcet()
{
	//��֤���ݲ�Ϊ��
	if (ui.name_LE->text().trimmed() == QString("") || ui.desceribe_TE->toPlainText().trimmed() == QString(""))
	{
		QMessageBox::information(0, QStringLiteral("��ʾ"), QStringLiteral("�������ݲ���Ϊ�գ�"), QMessageBox::Ok);
	}
	else 
	{
		//�������ݿ�
		DatabaseOperate* tempConnect = DatabaseOperate::getInstance();
		//��֤û����ͬ����Ŀ����������UNIQUE�ֶΡ�ֱ���ύ�����
		QString name = ui.name_LE->text();
		QString describe = ui.desceribe_TE->toPlainText();
		QString query = QString("INSERT INTO `sims`.`projectinfo_t`(`name`, `describe`) VALUES ('" + name + "', '" + describe + "')");
		tempConnect->exec(query);
		if (tempConnect->getDB().lastError().type() == QSqlError::NoError)
		{
			this->close();
			QMessageBox::about(NULL, QStringLiteral("��ʾ"), QStringLiteral("��ӳɹ�"));
		}
		else
		{
			QMessageBox::about(NULL, QStringLiteral("��ʾ"), QStringLiteral("���ʧ�ܡ���Ŀ���ظ���"));
		}
	}
}
