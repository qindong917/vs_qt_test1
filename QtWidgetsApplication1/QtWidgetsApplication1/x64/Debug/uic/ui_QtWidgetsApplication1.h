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
#include <QtWidgets/QFrame>
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
    QGridLayout *gridLayout_3;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *comboBox_url;
    QPushButton *pushButton_url;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QComboBox *comboBox_pamars;
    QPushButton *pushButton_pamars;
    QLabel *label_2;
    QFrame *frame_3;
    QGridLayout *gridLayout;
    QPushButton *pushButton_header;
    QComboBox *comboBox_header;
    QLabel *label_4;
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
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
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
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(label);

        comboBox_url = new QComboBox(frame);
        comboBox_url->setObjectName(QString::fromUtf8("comboBox_url"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(comboBox_url->sizePolicy().hasHeightForWidth());
        comboBox_url->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(comboBox_url);

        pushButton_url = new QPushButton(frame);
        pushButton_url->setObjectName(QString::fromUtf8("pushButton_url"));
        sizePolicy2.setHeightForWidth(pushButton_url->sizePolicy().hasHeightForWidth());
        pushButton_url->setSizePolicy(sizePolicy2);
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

        horizontalLayout_2->addWidget(pushButton_url);


        gridLayout_3->addWidget(frame, 0, 0, 1, 1);

        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        sizePolicy1.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy1);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        comboBox_pamars = new QComboBox(frame_2);
        comboBox_pamars->setObjectName(QString::fromUtf8("comboBox_pamars"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(comboBox_pamars->sizePolicy().hasHeightForWidth());
        comboBox_pamars->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(comboBox_pamars, 0, 1, 1, 1);

        pushButton_pamars = new QPushButton(frame_2);
        pushButton_pamars->setObjectName(QString::fromUtf8("pushButton_pamars"));
        sizePolicy2.setHeightForWidth(pushButton_pamars->sizePolicy().hasHeightForWidth());
        pushButton_pamars->setSizePolicy(sizePolicy2);
        pushButton_pamars->setMouseTracking(false);
        pushButton_pamars->setTabletTracking(false);
        pushButton_pamars->setAcceptDrops(false);
        pushButton_pamars->setToolTipDuration(0);
        pushButton_pamars->setStyleSheet(QString::fromUtf8(""));
        pushButton_pamars->setIcon(icon1);
        pushButton_pamars->setCheckable(false);
        pushButton_pamars->setChecked(false);
        pushButton_pamars->setFlat(false);

        gridLayout_2->addWidget(pushButton_pamars, 0, 2, 1, 1);

        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);


        gridLayout_3->addWidget(frame_2, 1, 0, 1, 1);

        frame_3 = new QFrame(centralWidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        sizePolicy1.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy1);
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_3);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_header = new QPushButton(frame_3);
        pushButton_header->setObjectName(QString::fromUtf8("pushButton_header"));
        sizePolicy2.setHeightForWidth(pushButton_header->sizePolicy().hasHeightForWidth());
        pushButton_header->setSizePolicy(sizePolicy2);
        pushButton_header->setMouseTracking(false);
        pushButton_header->setTabletTracking(false);
        pushButton_header->setAcceptDrops(false);
        pushButton_header->setToolTipDuration(0);
        pushButton_header->setIcon(icon1);
        pushButton_header->setCheckable(false);
        pushButton_header->setChecked(false);
        pushButton_header->setFlat(false);

        gridLayout->addWidget(pushButton_header, 0, 2, 1, 1);

        comboBox_header = new QComboBox(frame_3);
        comboBox_header->setObjectName(QString::fromUtf8("comboBox_header"));
        sizePolicy4.setHeightForWidth(comboBox_header->sizePolicy().hasHeightForWidth());
        comboBox_header->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(comboBox_header, 0, 1, 1, 1);

        label_4 = new QLabel(frame_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);


        gridLayout_3->addWidget(frame_3, 2, 0, 1, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBox->setFlat(false);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy4.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy4);

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


        gridLayout_3->addWidget(groupBox, 3, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy5);
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        et_result = new QTextEdit(groupBox_2);
        et_result->setObjectName(QString::fromUtf8("et_result"));
        sizePolicy5.setHeightForWidth(et_result->sizePolicy().hasHeightForWidth());
        et_result->setSizePolicy(sizePolicy5);

        gridLayout_5->addWidget(et_result, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 4, 0, 1, 1);

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
#ifndef QT_NO_TOOLTIP
        pushButton_pamars->setToolTip(QApplication::translate("QtWidgetsApplication1Class", "<html><head/><body><p>\345\210\240\351\231\244\346\255\244\350\256\260\345\275\225</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_pamars->setText(QString());
        label_2->setText(QApplication::translate("QtWidgetsApplication1Class", "\350\257\267\346\261\202\345\217\202\346\225\260:", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_header->setToolTip(QApplication::translate("QtWidgetsApplication1Class", "<html><head/><body><p>\345\210\240\351\231\244\346\255\244\350\256\260\345\275\225</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_header->setText(QString());
        label_4->setText(QApplication::translate("QtWidgetsApplication1Class", "\350\257\267\346\261\202\345\244\264  :", nullptr));
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
        groupBox_2->setTitle(QApplication::translate("QtWidgetsApplication1Class", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtWidgetsApplication1Class: public Ui_QtWidgetsApplication1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTWIDGETSAPPLICATION1_H
