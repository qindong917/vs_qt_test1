/********************************************************************************
** Form generated from reading UI file 'QtWidgetsApplication1RqBjnA.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef QTWIDGETSAPPLICATION1RQBJNA_H
#define QTWIDGETSAPPLICATION1RQBJNA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
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
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBox_url;
    QPushButton *pushButton_url;
    QLabel *label_2;
    QComboBox *comboBox_pamars;
    QPushButton *pushButton_pamars;
    QLabel *label_4;
    QComboBox *comboBox_header;
    QPushButton *pushButton_header;
    QLabel *label_3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_copy;
    QPushButton *pushButton_label;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QTextEdit *et_result;

    void setupUi(QMainWindow *QtWidgetsApplication1Class)
    {
        if (QtWidgetsApplication1Class->objectName().isEmpty())
            QtWidgetsApplication1Class->setObjectName(QString::fromUtf8("QtWidgetsApplication1Class"));
        QtWidgetsApplication1Class->resize(1200, 900);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QtWidgetsApplication1Class->sizePolicy().hasHeightForWidth());
        QtWidgetsApplication1Class->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/QtWidgetsApplication1/images/logo.ico"), QSize(), QIcon::Normal, QIcon::Off);
        QtWidgetsApplication1Class->setWindowIcon(icon);
        centralWidget = new QWidget(QtWidgetsApplication1Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox_url = new QComboBox(centralWidget);
        comboBox_url->setObjectName(QString::fromUtf8("comboBox_url"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBox_url->sizePolicy().hasHeightForWidth());
        comboBox_url->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(comboBox_url, 0, 1, 1, 1);

        pushButton_url = new QPushButton(centralWidget);
        pushButton_url->setObjectName(QString::fromUtf8("pushButton_url"));
        sizePolicy1.setHeightForWidth(pushButton_url->sizePolicy().hasHeightForWidth());
        pushButton_url->setSizePolicy(sizePolicy1);
        pushButton_url->setMouseTracking(false);
        pushButton_url->setTabletTracking(false);
        pushButton_url->setAcceptDrops(false);
        pushButton_url->setToolTipDuration(0);
        pushButton_url->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/QtWidgetsApplication1/images/delete.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_url->setIcon(icon1);
        pushButton_url->setCheckable(false);
        pushButton_url->setChecked(false);
        pushButton_url->setFlat(false);

        gridLayout->addWidget(pushButton_url, 0, 2, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        comboBox_pamars = new QComboBox(centralWidget);
        comboBox_pamars->setObjectName(QString::fromUtf8("comboBox_pamars"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(comboBox_pamars->sizePolicy().hasHeightForWidth());
        comboBox_pamars->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(comboBox_pamars, 1, 1, 1, 1);

        pushButton_pamars = new QPushButton(centralWidget);
        pushButton_pamars->setObjectName(QString::fromUtf8("pushButton_pamars"));
        sizePolicy1.setHeightForWidth(pushButton_pamars->sizePolicy().hasHeightForWidth());
        pushButton_pamars->setSizePolicy(sizePolicy1);
        pushButton_pamars->setMouseTracking(false);
        pushButton_pamars->setTabletTracking(false);
        pushButton_pamars->setAcceptDrops(false);
        pushButton_pamars->setToolTipDuration(0);
        pushButton_pamars->setStyleSheet(QString::fromUtf8(""));
        pushButton_pamars->setIcon(icon1);
        pushButton_pamars->setCheckable(false);
        pushButton_pamars->setChecked(false);
        pushButton_pamars->setFlat(false);

        gridLayout->addWidget(pushButton_pamars, 1, 2, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        comboBox_header = new QComboBox(centralWidget);
        comboBox_header->setObjectName(QString::fromUtf8("comboBox_header"));
        sizePolicy3.setHeightForWidth(comboBox_header->sizePolicy().hasHeightForWidth());
        comboBox_header->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(comboBox_header, 2, 1, 1, 1);

        pushButton_header = new QPushButton(centralWidget);
        pushButton_header->setObjectName(QString::fromUtf8("pushButton_header"));
        sizePolicy1.setHeightForWidth(pushButton_header->sizePolicy().hasHeightForWidth());
        pushButton_header->setSizePolicy(sizePolicy1);
        pushButton_header->setMouseTracking(false);
        pushButton_header->setTabletTracking(false);
        pushButton_header->setAcceptDrops(false);
        pushButton_header->setToolTipDuration(0);
        pushButton_header->setIcon(icon1);
        pushButton_header->setCheckable(false);
        pushButton_header->setChecked(false);
        pushButton_header->setFlat(false);

        gridLayout->addWidget(pushButton_header, 2, 2, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy4);
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBox->setFlat(false);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy3.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(pushButton);

        pushButton_copy = new QPushButton(groupBox);
        pushButton_copy->setObjectName(QString::fromUtf8("pushButton_copy"));

        horizontalLayout->addWidget(pushButton_copy);

        pushButton_label = new QPushButton(groupBox);
        pushButton_label->setObjectName(QString::fromUtf8("pushButton_label"));

        horizontalLayout->addWidget(pushButton_label);

        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        horizontalLayout->addWidget(pushButton_6);

        pushButton_8 = new QPushButton(groupBox);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        horizontalLayout->addWidget(pushButton_8);

        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        gridLayout->addWidget(groupBox, 3, 1, 1, 1);

        et_result = new QTextEdit(centralWidget);
        et_result->setObjectName(QString::fromUtf8("et_result"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(et_result->sizePolicy().hasHeightForWidth());
        et_result->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(et_result, 4, 0, 1, 2);

        QtWidgetsApplication1Class->setCentralWidget(centralWidget);

        retranslateUi(QtWidgetsApplication1Class);

        QMetaObject::connectSlotsByName(QtWidgetsApplication1Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtWidgetsApplication1Class)
    {
        QtWidgetsApplication1Class->setWindowTitle(QApplication::translate("QtWidgetsApplication1Class", "QtWidgetsApplication1", nullptr));
        label->setText(QApplication::translate("QtWidgetsApplication1Class", "\350\257\267\346\261\202\345\234\260\345\235\200:", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_url->setToolTip(QApplication::translate("QtWidgetsApplication1Class", "<html><head/><body><p>\345\210\240\351\231\244\346\255\244\350\256\260\345\275\225</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_url->setText(QString());
        label_2->setText(QApplication::translate("QtWidgetsApplication1Class", "\350\257\267\346\261\202\345\217\202\346\225\260:", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_pamars->setToolTip(QApplication::translate("QtWidgetsApplication1Class", "<html><head/><body><p>\345\210\240\351\231\244\346\255\244\350\256\260\345\275\225</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_pamars->setText(QString());
        label_4->setText(QApplication::translate("QtWidgetsApplication1Class", "\350\257\267\346\261\202\345\244\264:", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_header->setToolTip(QApplication::translate("QtWidgetsApplication1Class", "<html><head/><body><p>\345\210\240\351\231\244\346\255\244\350\256\260\345\275\225</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_header->setText(QString());
        label_3->setText(QApplication::translate("QtWidgetsApplication1Class", "\350\277\224\345\233\236", nullptr));
        groupBox->setTitle(QApplication::translate("QtWidgetsApplication1Class", "\345\212\237\350\203\275", nullptr));
        pushButton->setText(QApplication::translate("QtWidgetsApplication1Class", "\345\217\221\350\265\267\350\257\267\346\261\202", nullptr));
        pushButton_copy->setText(QApplication::translate("QtWidgetsApplication1Class", "\345\244\215\345\210\266\346\226\207\346\234\254", nullptr));
        pushButton_label->setText(QApplication::translate("QtWidgetsApplication1Class", "\345\212\240\346\240\207\347\255\276", nullptr));
        pushButton_6->setText(QApplication::translate("QtWidgetsApplication1Class", "\345\276\205\346\211\251\345\261\225", nullptr));
        pushButton_8->setText(QApplication::translate("QtWidgetsApplication1Class", "\345\276\205\346\211\251\345\261\225", nullptr));
        pushButton_5->setText(QApplication::translate("QtWidgetsApplication1Class", "\345\276\205\346\211\251\345\261\225", nullptr));
        pushButton_4->setText(QApplication::translate("QtWidgetsApplication1Class", "\345\276\205\346\211\251\345\261\225", nullptr));
        pushButton_3->setText(QApplication::translate("QtWidgetsApplication1Class", "\345\276\205\346\211\251\345\261\225", nullptr));
        pushButton_2->setText(QApplication::translate("QtWidgetsApplication1Class", "\345\276\205\346\211\251\345\261\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtWidgetsApplication1Class: public Ui_QtWidgetsApplication1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // QTWIDGETSAPPLICATION1RQBJNA_H
