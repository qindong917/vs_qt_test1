#ifndef MY_FILE_DIALOG_H
#define  MY_FILE_DIALOG_H
#include <QLineEdit>
#include <QDialog>
#include <QFileDialog>
/*class MyFileDialog : public QFileDialog
{
public:
    MyFileDialog(QWidget *parent);
private:
    QLineEdit *line_edit;
    QFileDialog *p;
};*/

class Dialog : public QDialog
{

public:
    Dialog(QWidget *parent = 0);
    QFileDialog* GetFileDlg()
    {
        return m_filedlg;
    }


private:

    QFileDialog *m_filedlg ;
    QLabel *textLabel;
    QLineEdit *textEdit ;

    QGridLayout *mainLayout ;

    QString openFilesPath;

};




#endif