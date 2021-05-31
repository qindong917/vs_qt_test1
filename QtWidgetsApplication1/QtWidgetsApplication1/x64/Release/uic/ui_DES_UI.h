/********************************************************************************
** Form generated from reading UI file 'DES_UI.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DES_UI_H
#define UI_DES_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DES_UI
{
public:

    void setupUi(QWidget *DES_UI)
    {
        if (DES_UI->objectName().isEmpty())
            DES_UI->setObjectName(QString::fromUtf8("DES_UI"));
        DES_UI->resize(400, 300);

        retranslateUi(DES_UI);

        QMetaObject::connectSlotsByName(DES_UI);
    } // setupUi

    void retranslateUi(QWidget *DES_UI)
    {
        DES_UI->setWindowTitle(QApplication::translate("DES_UI", "DES_UI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DES_UI: public Ui_DES_UI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DES_UI_H
