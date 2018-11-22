#include "ProjectAddEvent.h"

ProjectAddEvent::ProjectAddEvent(QString projectName, QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	this->setModal(true);
	m_projectName = projectName;

	connect(ui.save_PB, SIGNAL(clicked()), this, SLOT(save()));
	connect(ui.cancel_PB, SIGNAL(clicked()), this, SLOT(reject()));
}

ProjectAddEvent::~ProjectAddEvent()
{
}

void ProjectAddEvent::save()
{
	//д����־
	if (Log::getInstance()->addEvent(m_projectName, ui.event_TE->toPlainText()))
	{
		//����ɹ�
		this->close();
		QMessageBox::about(NULL, QStringLiteral("֪ͨ"), QStringLiteral("����¼��ɹ���"));
		//�ͷ��źţ���������ˢ��
		emit success();
	}
	else
	{
		QMessageBox::critical(0, QStringLiteral("֪ͨ"), QStringLiteral("����¼�ʧ�ܣ�"), QMessageBox::Cancel);
	}
}
