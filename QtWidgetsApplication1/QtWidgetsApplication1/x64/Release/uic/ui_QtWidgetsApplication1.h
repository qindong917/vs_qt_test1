/********************************************************************************
** Form generated from reading UI file 'QtWidgetsApplication1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTWIDGETSAPPLICATION1_H
#define UI_QTWIDGETSAPPLICATION1_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtWidgetsApplication1Class
{
public:
    QWidget *centralWidget;
    QLabel *label_2;
    QComboBox *comboBox_header;
    QComboBox *comboBox_pamars;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_3;
    QComboBox *comboBox_url;
    QTextEdit *et_result;
    QPushButton *pushButton_url;
    QPushButton *pushButton_pamars;
    QPushButton *pushButton_header;

    void setupUi(QMainWindow *QtWidgetsApplication1Class)
    {
        if (QtWidgetsApplication1Class->objectName().isEmpty())
            QtWidgetsApplication1Class->setObjectName(QString::fromUtf8("QtWidgetsApplication1Class"));
        QtWidgetsApplication1Class->resize(862, 740);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QtWidgetsApplication1Class->sizePolicy().hasHeightForWidth());
        QtWidgetsApplication1Class->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(QtWidgetsApplication1Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(7, 33, 50, 16));
        comboBox_header = new QComboBox(centralWidget);
        comboBox_header->setObjectName(QString::fromUtf8("comboBox_header"));
        comboBox_header->setGeometry(QRect(62, 60, 761, 19));
        comboBox_pamars = new QComboBox(centralWidget);
        comboBox_pamars->setObjectName(QString::fromUtf8("comboBox_pamars"));
        comboBox_pamars->setGeometry(QRect(62, 34, 761, 19));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(400, 90, 65, 20));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(7, 7, 50, 16));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(7, 59, 39, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(7, 110, 22, 16));
        comboBox_url = new QComboBox(centralWidget);
        comboBox_url->setObjectName(QString::fromUtf8("comboBox_url"));
        comboBox_url->setGeometry(QRect(62, 8, 761, 19));
        et_result = new QTextEdit(centralWidget);
        et_result->setObjectName(QString::fromUtf8("et_result"));
        et_result->setGeometry(QRect(7, 126, 851, 611));
        pushButton_url = new QPushButton(centralWidget);
        pushButton_url->setObjectName(QString::fromUtf8("pushButton_url"));
        pushButton_url->setGeometry(QRect(830, 7, 25, 21));
        sizePolicy1.setHeightForWidth(pushButton_url->sizePolicy().hasHeightForWidth());
        pushButton_url->setSizePolicy(sizePolicy1);
        pushButton_url->setMouseTracking(false);
        pushButton_url->setTabletTracking(false);
        pushButton_url->setAcceptDrops(false);
        pushButton_url->setToolTipDuration(0);
        pushButton_url->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8("images/delete.ico"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8("images/delete_on.ico"), QSize(), QIcon::Normal, QIcon::On);
        icon.addFile(QString::fromUtf8("images/delete.ico"), QSize(), QIcon::Disabled, QIcon::Off);
        icon.addFile(QString::fromUtf8("images/delete_on.ico"), QSize(), QIcon::Disabled, QIcon::On);
        icon.addFile(QString::fromUtf8("images/delete.ico"), QSize(), QIcon::Active, QIcon::Off);
        icon.addFile(QString::fromUtf8("images/delete_on.ico"), QSize(), QIcon::Active, QIcon::On);
        icon.addFile(QString::fromUtf8("images/delete.ico"), QSize(), QIcon::Selected, QIcon::Off);
        icon.addFile(QString::fromUtf8("images/delete_on.ico"), QSize(), QIcon::Selected, QIcon::On);
        pushButton_url->setIcon(icon);
        pushButton_url->setCheckable(false);
        pushButton_url->setChecked(false);
        pushButton_url->setFlat(false);
        pushButton_pamars = new QPushButton(centralWidget);
        pushButton_pamars->setObjectName(QString::fromUtf8("pushButton_pamars"));
        pushButton_pamars->setGeometry(QRect(830, 33, 25, 21));
        pushButton_pamars->setMouseTracking(false);
        pushButton_pamars->setTabletTracking(false);
        pushButton_pamars->setAcceptDrops(false);
        pushButton_pamars->setToolTipDuration(0);
        pushButton_pamars->setStyleSheet(QString::fromUtf8(""));
        pushButton_pamars->setIcon(icon);
        pushButton_pamars->setCheckable(false);
        pushButton_pamars->setChecked(false);
        pushButton_pamars->setFlat(false);
        pushButton_header = new QPushButton(centralWidget);
        pushButton_header->setObjectName(QString::fromUtf8("pushButton_header"));
        pushButton_header->setGeometry(QRect(830, 59, 25, 21));
        pushButton_header->setMouseTracking(false);
        pushButton_header->setTabletTracking(false);
        pushButton_header->setAcceptDrops(false);
        pushButton_header->setToolTipDuration(0);
        pushButton_header->setIcon(icon);
        pushButton_header->setCheckable(false);
        pushButton_header->setChecked(false);
        pushButton_header->setFlat(false);
        QtWidgetsApplication1Class->setCentralWidget(centralWidget);

        retranslateUi(QtWidgetsApplication1Class);

        QMetaObject::connectSlotsByName(QtWidgetsApplication1Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtWidgetsApplication1Class)
    {
        QtWidgetsApplication1Class->setWindowTitle(QApplication::translate("QtWidgetsApplication1Class", "QtWidgetsApplication1", nullptr));
        label_2->setText(QApplication::translate("QtWidgetsApplication1Class", "\350\257\267\346\261\202\345\217\202\346\225\260:", nullptr));
        pushButton->setText(QApplication::translate("QtWidgetsApplication1Class", "\345\217\221\350\265\267\350\257\267\346\261\202", nullptr));
        label->setText(QApplication::translate("QtWidgetsApplication1Class", "\350\257\267\346\261\202\345\234\260\345\235\200:", nullptr));
        label_4->setText(QApplication::translate("QtWidgetsApplication1Class", "\350\257\267\346\261\202\345\244\264:", nullptr));
        label_3->setText(QApplication::translate("QtWidgetsApplication1Class", "\350\277\224\345\233\236", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_url->setToolTip(QApplication::translate("QtWidgetsApplication1Class", "<html><head/><body><p>\345\210\240\351\231\244\346\255\244\350\256\260\345\275\225</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_url->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_pamars->setToolTip(QApplication::translate("QtWidgetsApplication1Class", "<html><head/><body><p>\345\210\240\351\231\244\346\255\244\350\256\260\345\275\225</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_pamars->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_header->setToolTip(QApplication::translate("QtWidgetsApplication1Class", "<html><head/><body><p>\345\210\240\351\231\244\346\255\244\350\256\260\345\275\225</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_header->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QtWidgetsApplication1Class: public Ui_QtWidgetsApplication1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTWIDGETSAPPLICATION1_H