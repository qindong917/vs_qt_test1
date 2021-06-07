#include "QtWidgetsApplication1.h"
#include"ui_QtWidgetsApplication1.h"
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QEventLoop>
#include <QTextCodec>
#include <QLineEdit>
#include <QFont>
#include <QRect>

#include <QJsonObject> 
#include <QJsonDocument>
#include <QJsonArray>

#include "LogUtil.h"

#include <iostream>
#include <QClipboard>
#include <QMimeData>
#include <QMessageBox>
#include <QInputDialog>

#pragma warning(disable : 4996)
using namespace std;

#include <windows.h>
#using "./Helpers.dll"
#using "./ICSharpCode.SharpZipLib.dll"
using namespace System;
using namespace System::Runtime::InteropServices;
#include <msclr\marshal_cppstd.h>
using namespace msclr::interop;

#pragma managed;
using namespace Helpers;

#include "SqlUtil.h"


QString UrlRequestPost(const QString url, const QString data);
LogUtil Log;
SqlUtil sql;
QJsonObject getJsonObjectFromString(const QString jsonString);
QString getStringFromJsonObject(const QJsonObject& jsonObject);
void go(const QString msg);

QStringList list_url;
extern int i = 0, j = 0;

extern int Url_Type = 1;
extern int Pamars_Type = 2;
extern int Url_Index = 0;
extern int Focus_Index = 2;
extern int Pamars_Index = 0;
QList<QtContent*> urllist;
QList<QtContent*>pamarslist;
extern int url_uuid;
extern int pamars_uuid;

QtWidgetsApplication1::QtWidgetsApplication1(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	// 将信号 mySignal() 与槽 mySlot() 相关联
	connect(this, SIGNAL(mySignal(QString)), this, SLOT(mySlot(QString)));
	// 将信号 mySignal(int) 与槽 mySlot(int) 相关联
	//connect(ui.comboBox_url, SIGNAL(currentIndexChanged(int)), this, SLOT(mySlotUrlIndex(int)));
	connect(ui.comboBox_url, SIGNAL(activated(int)), this, SLOT(mySlotUrlIndex(int)));
	//connect(ui.comboBox_pamars, SIGNAL(currentIndexChanged(int)), this, SLOT(mySlotPamarsIndex(int)));
	connect(ui.comboBox_pamars, SIGNAL(activated(int)), this, SLOT(mySlotPamarsIndex(int)));
	
	connect(ui.et_result,SIGNAL(copyAvailable(bool)),this,SLOT(mySlotCopy(bool)));

	ui.et_result->installEventFilter(this);  //在窗体上为et_result安装过滤器
	ui.comboBox_url->installEventFilter(this);  
	ui.comboBox_pamars->installEventFilter(this); 
	
	urllist= sql.query(sql.OpenSql(), Url_Type);
	pamarslist= sql.query(sql.OpenSql(), Pamars_Type);

	sql.closeDB();

	ui.comboBox_url->setEditable(true);
	for (i = 0; i < urllist.size(); i++)
	{
		QtContent* bean = urllist.at(i);
		if (bean->getLabel() == nullptr)
		{
			ui.comboBox_url->addItem(bean->getContent());
		}
		else {
			QString temp("(");
			temp.append(bean->getLabel());
			temp.append(")   ");
			temp.append(bean->getContent());
			ui.comboBox_url->addItem(temp);
		}
	}
	if (urllist.size() > 0)
		ui.comboBox_url->setEditText(urllist.at(0)->getContent());
	else
	{
		ui.comboBox_url->setEditText("");
	}

	ui.comboBox_pamars->setEditable(true);
	for (i = 0; i < pamarslist.size(); i++)
	{
		QtContent* bean = pamarslist.at(i);
		if (bean->getLabel() == nullptr)
		{
			ui.comboBox_pamars->addItem(bean->getContent());
		}
		else {
			QString temp("(");
			temp.append(bean->getLabel());
			temp.append(")   ");
			temp.append(bean->getContent());
			ui.comboBox_pamars->addItem(temp);
		}
	}

	if (pamarslist.size() > 0)
		ui.comboBox_pamars->setEditText(pamarslist.at(0)->getContent());
	else
	{
		ui.comboBox_pamars->setEditText("");
	}


	QString qtheaderpamars = "";
	ui.comboBox_header->setEditable(true);
}



QString UrlRequestPost(const QString url, const QString data)

{
	QNetworkAccessManager qnam;

	const QUrl aurl(url);

	QNetworkRequest qnr(aurl);

	qnr.setRawHeader("Content-Type", "application/json;charset=UTF-8");

	//qnr.setHeader();
	//请求参数
	QNetworkReply *reply = qnam.post(qnr, data.toLocal8Bit());



	QEventLoop eventloop;

	reply->connect(reply, SIGNAL(finished()), &eventloop, SLOT(quit()));

	eventloop.exec(QEventLoop::ExcludeUserInputEvents);

	if (reply->error())
	{
		qDebug() << reply->errorString();

		go(reply->errorString());

		return "";
	}


	QTextCodec *codec = QTextCodec::codecForName("utf8");

	QString replyData = codec->toUnicode(reply->readAll());



	reply->deleteLater();

	reply = 0;


	return replyData;

}

//%a, %A 读入一个浮点值(仅C99有效)
//% c 读入一个字符
//%d 读入十进制整数
//%i 读入十进制，八进制，十六进制整数
//%o 读入八进制整数
//%x, %X 读入十六进制整数
//%s 读入一个字符串，遇空格、制表符或换行符结束。
//%f, %F, %e, %E, %g, %G 用来输入实数，可以用小数形式或指数形式输入
//%p 读入一个指针
//%u 读入一个无符号十进制整数
//%n 至此已读入值的等价字符数
//%[] 扫描字符集合

//调用c#注意:
//1：把要调用的dll复制到代码目录下，
//2：#using "./Helpers.dll"
//3：项目-》属性-》C/C++ -》常规-》公共语言运行时支持cli
std::string desKey = "19aGeD4K";

void QtWidgetsApplication1::on_pushButton_clicked()
{

	QString url = ui.comboBox_url->currentText().trimmed();

	if (url.length() <= 0)
		return;

	if (sql.insert(sql.OpenSql(), Url_Type, url) > 0)
	{
		ui.comboBox_url->clear();

		urllist = sql.query(sql.OpenSql(), Url_Type);

		for (i = 0; i < urllist.size(); i++)
		{
			QtContent* bean = urllist.at(i);
			if (bean->getLabel() == nullptr) 
			{
				ui.comboBox_url->addItem(bean->getContent());
			}
			else {
				QString temp("(");
				temp.append(bean->getLabel());
				temp.append(")   ");
				temp.append(bean->getContent());
				ui.comboBox_url->addItem(temp);
			}
		}

		ui.comboBox_url->setEditText(url);

		QString qtpamars = ui.comboBox_pamars->currentText().trimmed();

		sql.updateLink(sql.OpenSql(), qtpamars, url);

	};

	Log.i("@请求URL:  %s\n", url.toStdString().c_str());

	QString qtpamars = ui.comboBox_pamars->currentText().trimmed();

	if (sql.insert(sql.OpenSql(), Pamars_Type, qtpamars) > 0)
	{
		ui.comboBox_pamars->clear();

		pamarslist = sql.query(sql.OpenSql(), Pamars_Type);

		for (i = 0; i < pamarslist.size(); i++)
		{
			QtContent* bean = pamarslist.at(i);
			if (bean->getLabel() == nullptr)
			{
				ui.comboBox_pamars->addItem(bean->getContent());
			}
			else {
				QString temp("(");
				temp.append(bean->getLabel());
				temp.append(")   ");
				temp.append(bean->getContent());
				ui.comboBox_pamars->addItem(temp);
			}
		}

		ui.comboBox_pamars->setEditText(qtpamars);
	};


	sql.closeDB();

	//QString->std::string 防止乱码

	string stdStrp = string(qtpamars.toLocal8Bit());

	Log.i("@请求参数:  %s\n", stdStrp.c_str());

	EncryptHelper ^helper = gcnew EncryptHelper();

	//cli数据注意前缀^
	String^ Clipamars = marshal_as<String^>(stdStrp);//std::string->cli::String

	Text::Encoding ^u8 = Text::Encoding::UTF8;

	cli::array<unsigned char> ^Clipamarsarray = u8->GetBytes(Clipamars);//cli::String->cli::array<unsigned char>

	cli::array<unsigned char> ^Clipamarsarray2 = helper->ZipEncode(Clipamarsarray);//开始压缩

	String^ key = gcnew String(desKey.c_str());//std::string->cli::String（方式2）

	String ^ClipamarsStr = helper->EncryptDESECB(Clipamarsarray2, key);//开始DES加密

	string stdpamarsStr = marshal_as<std::string>(ClipamarsStr);//cli::String->std::string

	//QString qtpamarsStr = QString::fromStdString(stdpamarsStr);//std::string->QString
	QString qtpamarsStr = QString(QString::fromLocal8Bit(stdpamarsStr.c_str()));//std::string->QString 防止乱码

	QString request = UrlRequestPost(url, qtpamarsStr);//qtPost

	if (request.length() <= 0)
		return;

	//QString->std::string 防止乱码
	string stdStr = string(request.toLocal8Bit());
	//string stdStr	= request.toStdString();//QString->std::string

	char *cstr = new char[stdStr.length() + 1];

	strcpy(cstr, stdStr.c_str());

	String^ stdToCli = marshal_as<String^>(desKey);//std::string->cli::String

	String^ dec = gcnew String(stdStr.c_str());//std::string->cli::String



	try {

		cli::array<unsigned char> ^p2cli = helper->DecryptDESECB(dec, key);//开始DES解密

		cli::array<unsigned char> ^p3cli = helper->ZipDecode(p2cli);//开始解压

		String ^p4cli = u8->GetString(p3cli);//cli::array<unsigned char>->cli::String

		string cliToWstring = marshal_as<std::string>(p4cli);//cli::String->std::string

		Log.i("@返回结果:  %s\n", cliToWstring.c_str());

		QString result = QString(QString::fromLocal8Bit(cliToWstring.c_str()));//std::string->QString 防止乱码

		QJsonDocument jsonResponse = QJsonDocument::fromJson(result.toUtf8());

		QJsonObject jo = jsonResponse.object();

		if (jo.contains("total"))
		{
			int total = jo.value("total").toInt();
			int rst = jo.value("rst").toInt();
			int cost = jo.value("cost").toInt();
			int count = jo.value("count").toInt();
			QJsonObject userinfo = jo.value("userinfo").toObject();
			QJsonArray  list = jo.value("list").toArray();
			int i = 0;
			for (i = 0; i < list.size(); i++)
			{
				QJsonObject jo2 = list.at(i).toObject();

				int cost = jo2.value("cost").toInt();
				int isrefund = jo2.value("isrefund").toInt();
				int paytype = jo2.value("paytype").toInt();
				int status = jo2.value("ptistatusme").toInt();
				string name = jo2.value("name").toString().toStdString();
				string payorderid = jo2.value("payorderid").toString().toStdString();
				string paytypename = jo2.value("paytypename").toString().toStdString();
				string ptime = jo2.value("ptime").toString().toStdString();
			}
		}

		ui.et_result->setText(QJsonDocument(jo).toJson(QJsonDocument::Indented));

		//QByteArray root_str = jsonDocument.toJson(QJsonDocument::Compact);  //紧凑格式
		//QByteArray root_str = jsonDocument.toJson(QJsonDocument::Indented);   //标准JSON格式
		qDebug() << QJsonDocument(jo).toJson(QJsonDocument::Indented);

	}
	catch (...) {

		ui.et_result->setText(request);
		qDebug() << request;
	}

}

void QtWidgetsApplication1::on_pushButton_url_clicked()
{
	if (urllist.size() <= 0)
		return;

	QtContent* q = urllist.at(Url_Index);
	QString c = q->getContent();
	if (sql.deletedata(sql.OpenSql(), c) > 0)
	{
		ui.comboBox_url->clear();

		urllist = sql.query(sql.OpenSql(), Url_Type);

		for (i = 0; i < urllist.size(); i++)
		{
			QtContent* bean = urllist.at(i);
			if (bean->getLabel() == nullptr)
			{
				ui.comboBox_url->addItem(bean->getContent());
			}
			else {
				QString temp("(");
				temp.append(bean->getLabel());
				temp.append(")   ");
				temp.append(bean->getContent());
				ui.comboBox_url->addItem(temp);
			}
		}

		ui.comboBox_url->setEditText("");
	};

	sql.closeDB();
}

void QtWidgetsApplication1::on_pushButton_pamars_clicked()
{
	if (pamarslist.size() <= 0)
		return;

	QtContent* q = pamarslist.at(Pamars_Index);
	QString c = q->getContent();
	if (sql.deletedata(sql.OpenSql(), c) > 0)
	{
		ui.comboBox_pamars->clear();

		pamarslist = sql.query(sql.OpenSql(), Pamars_Type);

		for (i = 0; i < pamarslist.size(); i++)
		{
			QtContent* bean = pamarslist.at(i);
			if (bean->getLabel() == nullptr)
			{
				ui.comboBox_pamars->addItem(bean->getContent());
			}
			else {
				QString temp("(");
				temp.append(bean->getLabel());
				temp.append(")   ");
				temp.append(bean->getContent());
				ui.comboBox_pamars->addItem(temp);
			}
		}
		ui.comboBox_pamars->setEditText("");
	};

	sql.closeDB();
}

void QtWidgetsApplication1::on_pushButton_header_clicked()
{
	//QMessageBox::about(this, "未完成", "现在用不上，没做！");
}

void showMessageStr() 
{
	QTextCodec* g_pChnCodec = QTextCodec::codecForName("GBK");

	QPushButton *okbtn = new QPushButton(g_pChnCodec->toUnicode(("确定")));

	QPushButton *cancelbtn = new QPushButton(g_pChnCodec->toUnicode(("取消")));

	QMessageBox *mymsgbox = new QMessageBox;

	mymsgbox->addButton(okbtn, QMessageBox::AcceptRole);

	mymsgbox->addButton(cancelbtn, QMessageBox::RejectRole);

	mymsgbox->setWindowTitle(g_pChnCodec->toUnicode(("输入新标签")));

	mymsgbox->show();

};



void QtWidgetsApplication1::updataLabel(QString str)
{
	switch (Focus_Index)
	{
	case 0:
	{
		if (urllist.size() <= 0)
			return;

		QtContent* q = urllist.at(Url_Index);
		QString c = q->getContent();
		if (sql.update(sql.OpenSql(), str, c) > 0)
		{
			ui.comboBox_url->clear();

			urllist = sql.query(sql.OpenSql(), Url_Type);

			for (i = 0; i < urllist.size(); i++)
			{
				QtContent* bean = urllist.at(i);
				if (bean->getLabel() == nullptr)
				{
					ui.comboBox_url->addItem(bean->getContent());
				}
				else {
					QString temp("(");
					temp.append(bean->getLabel());
					temp.append(")   ");
					temp.append(bean->getContent());
					ui.comboBox_url->addItem(temp);
				}
			}
			ui.comboBox_url->setEditText(c);
		};

		sql.closeDB();
	}
	break;
	case 1:
	{
		if (pamarslist.size() <= 0)
			return;

		QtContent* q = pamarslist.at(Pamars_Index);
		QString c = q->getContent();
		if (sql.update(sql.OpenSql(), str, c) > 0)
		{
			ui.comboBox_pamars->clear();

			pamarslist = sql.query(sql.OpenSql(), Pamars_Type);

			for (i = 0; i < pamarslist.size(); i++)
			{
				QtContent* bean = pamarslist.at(i);
				if (bean->getLabel() == nullptr)
				{
					ui.comboBox_pamars->addItem(bean->getContent());
				}
				else {
					QString temp("(");
					temp.append(bean->getLabel());
					temp.append(")   ");
					temp.append(bean->getContent());
					ui.comboBox_pamars->addItem(temp);
				}
			}

			ui.comboBox_pamars->setEditText(c);
		};

		sql.closeDB();
	}
	break;
	default:
		break;
	}
}

void QtWidgetsApplication1:: showInputDialog()
{
	bool isOK;

	QTextCodec* g_pChnCodec = QTextCodec::codecForName("GBK");

	QPushButton *okbtn = new QPushButton(g_pChnCodec->toUnicode(("确定")));

	QString text = QInputDialog::getText(NULL, 
		g_pChnCodec->toUnicode(("提示")),
		g_pChnCodec->toUnicode(("输入新标签")),
		//	QLineEdit::Password,	//输入的是密码，不显示明文
		QLineEdit::Normal,			//输入框明文
		NULL,
		&isOK);

	if (isOK) {
		/*QMessageBox::information(NULL, "Information",
			"Your comment is: <b>" + text + "</b>",
			QMessageBox::Yes | QMessageBox::No,
			QMessageBox::Yes);*/
		updataLabel(text);
	}
}

void QtWidgetsApplication1::on_pushButton_label_clicked()
{
	showInputDialog();
	
}

void QtWidgetsApplication1::on_pushButton_copy_clicked()
{

	QString str;
	
	
	switch (Focus_Index)
	{
	case 0:
		str = ui.comboBox_url->currentText();
		break;
	case 1:
		str = ui.comboBox_pamars->currentText();
		break;
	case 2:
		str = ui.et_result->document()->toPlainText();
		break;
	default:
		break;
	}

	string stdStrp = string(str.toLocal8Bit());
	//目前不知为何QT的剪切板功能不能使用？，使用C++的
	HWND hWnd = NULL;
	OpenClipboard(hWnd);//打开剪切板
	EmptyClipboard();//清空剪切板
	HANDLE hHandle = GlobalAlloc(GMEM_FIXED, 10000);//分配内存
	char* pData = (char*)GlobalLock(hHandle);//锁定内存，返回申请内存的首地址
	strcpy_s(pData, 10000, stdStrp.c_str());//或strcpy(pData, "this is a ClipBoard Test.");
	SetClipboardData(CF_TEXT, hHandle);//设置剪切板数据
	GlobalUnlock(hHandle);//解除锁定
	CloseClipboard();//关闭剪切板
}




// QString >> QJson

QJsonObject getJsonObjectFromString(const QString jsonString) {

	QJsonDocument jsonDocument = QJsonDocument::fromJson(jsonString.toLocal8Bit().data());
	QByteArray root_str = jsonDocument.toJson(QJsonDocument::Compact);  //紧凑格式
	//QByteArray root_str = jsonDocument.toJson(QJsonDocument::Indented);   //标准JSON格式

	if (jsonDocument.isNull()) {

		qDebug() << "===> please check the string " << jsonString.toLocal8Bit().data();

	}

	QJsonObject jsonObject = jsonDocument.object();

	return jsonObject;

}

// QJson >> QString

QString getStringFromJsonObject(const QJsonObject& jsonObject) {

	return QString(QJsonDocument(jsonObject).toJson());

}


void go(QString msg) { // 普通函数go

	for (QWidget *w : qApp->topLevelWidgets()) { // 获取顶级窗口

		qDebug() << w->objectName();
		if (w->objectName() == "QtWidgetsApplication1Class") // 判断是否是主窗口类名：主窗口类 + Class
		{                                                // 我的主窗口类是：QtGuiApplication1
			QtWidgetsApplication1* qw = (QtWidgetsApplication1*)w; // 转换并获取主窗口指针
			emit qw->mySignal(msg);
		}
	}
}

// 定义槽函数 mySlot()
void QtWidgetsApplication1::mySlot(QString msg)
{

	ui.et_result->setText(msg);
	//QMessageBox::about(this, "异常信息", msg);

}
// 定义槽函数 mySlotUrlIndex(int)
void QtWidgetsApplication1::mySlotUrlIndex(int x)
{
	if (x < 0)
		return;
	Url_Index = x;
	if (Url_Index < urllist.size()) {
		QtContent* q = urllist.at(Url_Index);
		QString c = q->getContent();
		
		ui.comboBox_url->setEditText(c);

		QString l = q->getLink();
		if(nullptr!=l)
		{
			ui.comboBox_pamars->setEditText(l);
		}
		
		//qDebug() << c << "\n" << l;
	}
	
}
// 定义槽函数 mySlotPamarsIndex(int)
void QtWidgetsApplication1::mySlotPamarsIndex(int x)
{
	if (x < 0)
		return;
	Pamars_Index = x;
	if(Pamars_Index<pamarslist.size()){
	QtContent* q = pamarslist.at(Pamars_Index);
	QString c = q->getContent();
	ui.comboBox_pamars->setEditText(c);
	//qDebug() << c;
	}
}

void QtWidgetsApplication1::mySlotCopy(bool yes)
{
	
	if (yes) {
		try
		{

			QString str = ui.et_result->document()->toPlainText();
			string stdStrp = string(str.toLocal8Bit());
			//目前不知为何QT的剪切板功能不能使用？，使用C++的
			HWND hWnd = NULL;
			OpenClipboard(hWnd);//打开剪切板
			EmptyClipboard();//清空剪切板
			HANDLE hHandle = GlobalAlloc(GMEM_FIXED, 10000);//分配内存
			char* pData = (char*)GlobalLock(hHandle);//锁定内存，返回申请内存的首地址
			strcpy_s(pData, 10000, stdStrp.c_str());//或strcpy(pData, "this is a ClipBoard Test.");
			SetClipboardData(CF_TEXT, hHandle);//设置剪切板数据
			GlobalUnlock(hHandle);//解除锁定
			CloseClipboard();//关闭剪切板
		}
		catch (...) {
			QMessageBox::about(this, QString::fromLocal8Bit("警告"), QString::fromLocal8Bit("复制内容过多"));
		}
		
	}
}

void QtWidgetsApplication1::mySlotCopy2(bool yes)
{
	
}

int color_v = 240;
bool QtWidgetsApplication1::eventFilter(QObject * watched, QEvent * event)
{
	if (watched == ui.et_result)         //首先判断控件(这里指 lineEdit1)
	{
		if (event->type() == QEvent::FocusIn)     //然后再判断控件的具体事件 (这里指获得焦点事件)
		{
			QPalette p = QPalette();
			p.setColor(QPalette::Base, QColor(color_v, color_v, color_v, 255));
			ui.et_result->setPalette(p);
			Focus_Index = 2;
		}
		else if (event->type() == QEvent::FocusOut)    // 这里指 lineEdit1 控件的失去焦点事件
		{
			QPalette p = QPalette();
			p.setColor(QPalette::Base, Qt::white);
			ui.et_result->setPalette(p);
		}
	}

	if (watched == ui.comboBox_url)         //首先判断控件(这里指 lineEdit1)
	{
		if (event->type() == QEvent::FocusIn)     //然后再判断控件的具体事件 (这里指获得焦点事件)
		{
			QPalette p = QPalette();
			p.setColor(QPalette::Base, QColor(color_v, color_v, color_v, 255));
			ui.comboBox_url->setPalette(p);
			Focus_Index = 0;
		}
		else if (event->type() == QEvent::FocusOut)    // 这里指 lineEdit1 控件的失去焦点事件
		{
			QPalette p = QPalette();
			p.setColor(QPalette::Base, Qt::white);
			ui.comboBox_url->setPalette(p);
		}
	}

	if (watched == ui.comboBox_pamars)         //首先判断控件(这里指 lineEdit1)
	{
		if (event->type() == QEvent::FocusIn)     //然后再判断控件的具体事件 (这里指获得焦点事件)
		{
			QPalette p = QPalette();
			p.setColor(QPalette::Base, QColor(color_v, color_v, color_v, 255));
			ui.comboBox_pamars->setPalette(p);
			Focus_Index = 1;
		}
		else if (event->type() == QEvent::FocusOut)    // 这里指 lineEdit1 控件的失去焦点事件
		{
			QPalette p = QPalette();
			p.setColor(QPalette::Base, Qt::white);
			ui.comboBox_pamars->setPalette(p);
		}
	}

	return QWidget::eventFilter(watched, event);     // 最后将事件交给上层对话框
}



