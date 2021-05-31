/********************************************************************************
** Form generated from reading UI file 'QtWidgetsClassTest1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTWIDGETSCLASSTEST1_H
#define UI_QTWIDGETSCLASSTEST1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtWidgetsClassTest1
{
public:

    void setupUi(QWidget *QtWidgetsClassTest1)
    {
        if (QtWidgetsClassTest1->objectName().isEmpty())
            QtWidgetsClassTest1->setObjectName(QString::fromUtf8("QtWidgetsClassTest1"));
        QtWidgetsClassTest1->resize(400, 300);

        retranslateUi(QtWidgetsClassTest1);

        QMetaObject::connectSlotsByName(QtWidgetsClassTest1);
    } // setupUi

    void retranslateUi(QWidget *QtWidgetsClassTest1)
    {
        QtWidgetsClassTest1->setWindowTitle(QApplication::translate("QtWidgetsClassTest1", "QtWidgetsClassTest1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtWidgetsClassTest1: public Ui_QtWidgetsClassTest1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTWIDGETSCLASSTEST1_H
