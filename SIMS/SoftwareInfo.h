#pragma once

#include <QDialog>
#include "ui_SoftwareInfo.h"

class SoftwareInfo : public QDialog
{
	Q_OBJECT

public:
	SoftwareInfo(QDialog *parent = Q_NULLPTR);
	~SoftwareInfo();

private:
	Ui::SoftwareInfo ui;
};
