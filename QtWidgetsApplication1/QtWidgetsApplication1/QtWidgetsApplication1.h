#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtWidgetsApplication1.h"
//#include<QMessageBox>


class QtWidgetsApplication1 : public QMainWindow
{
	Q_OBJECT

public:
	QtWidgetsApplication1(QWidget *parent = Q_NULLPTR);
	void QtWidgetsApplication1::updataLabel(QString str);
	void showInputDialog();

private:
	Ui::QtWidgetsApplication1Class ui;

private slots:
	void on_pushButton_clicked();
	void on_pushButton_url_clicked();
	void on_pushButton_pamars_clicked();
	void on_pushButton_header_clicked();
	void on_pushButton_copy_clicked();
	void on_pushButton_label_clicked();


	// �ź�������
signals:
	// �����ź� mySignal()
	void mySignal(QString msg);

	// ��������
public slots:
	// �����ۺ��� mySlot()
	void mySlot(QString msg);
	// �����ۺ��� mySlot(int)
	void mySlotUrlIndex(int x);

	void mySlotPamarsIndex(int x);

	void mySlotCopy(bool);

	void mySlotCopy2(bool);

	bool eventFilter(QObject *, QEvent *);    //ע������

};