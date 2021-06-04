#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtWidgetsApplication1.h"
//#include<QMessageBox>


class QtWidgetsApplication1 : public QMainWindow
{
	Q_OBJECT

public:
	QtWidgetsApplication1(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtWidgetsApplication1Class ui;

private slots:
	void on_pushButton_clicked();
	void on_pushButton_url_clicked();
	void on_pushButton_pamars_clicked();
	void on_pushButton_header_clicked();


	// 信号声明区
signals:
	// 声明信号 mySignal()
	void mySignal(QString msg);

	// 槽声明区
public slots:
	// 声明槽函数 mySlot()
	void mySlot(QString msg);
	// 声明槽函数 mySlot(int)
	void mySlotUrlIndex(int x);

	void mySlotPamarsIndex(int x);

	void mySlotCopy(bool);

	void mySlotCopy2();

};