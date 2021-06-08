/********************************************************************************
** Form generated from reading UI file 'QtBatchWidgetsClassStxMpE.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef QTBATCHWIDGETSCLASSSTXMPE_H
#define QTBATCHWIDGETSCLASSSTXMPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtBatchWidgetsClass
{
public:
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_time;
    QPushButton *pushButton_start;
    QFrame *frame_2;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_file_path;
    QPushButton *pushButton_select_file;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPlainTextEdit *plainTextEdit_file_content;

    void setupUi(QWidget *QtBatchWidgetsClass)
    {
        if (QtBatchWidgetsClass->objectName().isEmpty())
            QtBatchWidgetsClass->setObjectName(QString::fromUtf8("QtBatchWidgetsClass"));
        QtBatchWidgetsClass->resize(651, 744);
        gridLayout_5 = new QGridLayout(QtBatchWidgetsClass);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        groupBox_2 = new QGroupBox(QtBatchWidgetsClass);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QFont font;
        font.setPointSize(11);
        groupBox_2->setFont(font);
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        frame = new QFrame(groupBox_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 50));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        lineEdit_time = new QLineEdit(frame);
        lineEdit_time->setObjectName(QString::fromUtf8("lineEdit_time"));
        lineEdit_time->setMinimumSize(QSize(100, 50));

        gridLayout_2->addWidget(lineEdit_time, 0, 1, 1, 1);

        pushButton_start = new QPushButton(frame);
        pushButton_start->setObjectName(QString::fromUtf8("pushButton_start"));
        pushButton_start->setMinimumSize(QSize(0, 50));

        gridLayout_2->addWidget(pushButton_start, 0, 2, 1, 1);


        gridLayout_4->addWidget(frame, 0, 0, 1, 1);

        frame_2 = new QFrame(groupBox_2);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 50));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        lineEdit_file_path = new QLineEdit(frame_2);
        lineEdit_file_path->setObjectName(QString::fromUtf8("lineEdit_file_path"));
        lineEdit_file_path->setMinimumSize(QSize(0, 50));

        gridLayout_3->addWidget(lineEdit_file_path, 0, 1, 1, 1);

        pushButton_select_file = new QPushButton(frame_2);
        pushButton_select_file->setObjectName(QString::fromUtf8("pushButton_select_file"));
        pushButton_select_file->setMinimumSize(QSize(0, 50));

        gridLayout_3->addWidget(pushButton_select_file, 0, 2, 1, 1);


        gridLayout_4->addWidget(frame_2, 1, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox = new QGroupBox(QtBatchWidgetsClass);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFont(font);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        plainTextEdit_file_content = new QPlainTextEdit(groupBox);
        plainTextEdit_file_content->setObjectName(QString::fromUtf8("plainTextEdit_file_content"));

        gridLayout->addWidget(plainTextEdit_file_content, 0, 0, 1, 1);


        gridLayout_5->addWidget(groupBox, 1, 0, 1, 1);


        retranslateUi(QtBatchWidgetsClass);

        QMetaObject::connectSlotsByName(QtBatchWidgetsClass);
    } // setupUi

    void retranslateUi(QWidget *QtBatchWidgetsClass)
    {
        QtBatchWidgetsClass->setWindowTitle(QApplication::translate("QtBatchWidgetsClass", "QtBatchWidgetsClass", nullptr));
        groupBox_2->setTitle(QApplication::translate("QtBatchWidgetsClass", "\350\256\276\347\275\256", nullptr));
        label->setText(QApplication::translate("QtBatchWidgetsClass", "\344\273\273\345\212\241\351\227\264\351\232\224\357\274\232", nullptr));
        pushButton_start->setText(QApplication::translate("QtBatchWidgetsClass", "\345\274\200\345\247\213\344\273\273\345\212\241", nullptr));
        label_2->setText(QApplication::translate("QtBatchWidgetsClass", "\350\257\273\345\217\226\346\226\207\344\273\266\357\274\232", nullptr));
        pushButton_select_file->setText(QApplication::translate("QtBatchWidgetsClass", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        groupBox->setTitle(QApplication::translate("QtBatchWidgetsClass", "\350\204\232\346\234\254\346\272\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtBatchWidgetsClass: public Ui_QtBatchWidgetsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // QTBATCHWIDGETSCLASSSTXMPE_H
