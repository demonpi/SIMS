#include "SoftwareInfo.h"

SoftwareInfo::SoftwareInfo(QDialog *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	this->setModal(true);
}

SoftwareInfo::~SoftwareInfo()
{
}
