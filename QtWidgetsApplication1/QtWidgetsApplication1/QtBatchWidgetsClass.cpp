#include "QtBatchWidgetsClass.h"
#include "myFileDlg.h"

QtBatchWidgetsClass::QtBatchWidgetsClass(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);


}

QtBatchWidgetsClass::~QtBatchWidgetsClass()
{
}


void QtBatchWidgetsClass::on_pushButton_start_clicked()
{
	
}

void QtBatchWidgetsClass::on_pushButton_select_file_clicked()
{
	Dialog *dialog = new Dialog(0);

	dialog->setWindowTitle("Select BIG Image File");
	dialog->setModal(true);
	dialog->show( ) ;

}

