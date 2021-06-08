#include <QWidget>
#include <QGridLayout>
#include <QFileDialog>
#include <assert.h>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QDialog>

#include "myFileDlg.h"



Dialog::Dialog(QWidget *parent): QDialog(parent)
{

    /***********************************************************/

    QFileDialog *m_filedlg = new QFileDialog(this,Qt::SubWindow);

    m_filedlg->setOption(QFileDialog::DontUseNativeDialog,true);

    if(m_filedlg->testOption(QFileDialog::DontUseNativeDialog))
        printf("cuccee\n");



    //m_filedlg ->getOpenFileName(0,"Select File","D:\\","Video Files (*.avi *.mpg);;3D STL Files (*.stl)",NULL,QFileDialog::DontUseNativeDialog);



    //m_filedlg->setWindowFlags(Qt::SubWindow) ;

    /***********************************************************/

    textLabel = new QLabel( tr(" StepX: ") );
    textEdit  = new QLineEdit();

    mainLayout = new QGridLayout(this);


    mainLayout->addWidget( m_filedlg , 0 , 0 , 2 , 1  ) ;
   /* mainLayout->addWidget( textLabel , 2 , 0 , 1 , 1  ) ;
    mainLayout->addWidget(textEdit ,   2 , 1 , 1 , 1  ) ;*/


    /***********************************************************/

    //setMinimumHeight( 400 ) ;
    //setMinimumWidth( 600 ) ;

    setSizePolicy( QSizePolicy( QSizePolicy::Expanding , QSizePolicy::Expanding )  ) ;

    setLayout(mainLayout);


}