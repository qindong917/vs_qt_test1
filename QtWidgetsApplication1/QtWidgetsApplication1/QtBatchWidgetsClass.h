#pragma once

#include <QWidget>
#include "ui_QtBatchWidgetsClass.h"
#include <qDebug>
#include <QFileDialog>



class QtBatchWidgetsClass : public QWidget
{
	Q_OBJECT

public:
	QtBatchWidgetsClass(QWidget *parent = Q_NULLPTR);
	~QtBatchWidgetsClass();

private slots:
	void on_pushButton_start_clicked();
	void on_pushButton_select_file_clicked();

private:
	Ui::QtBatchWidgetsClass ui;
};
