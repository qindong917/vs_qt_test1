#pragma once

#include <QComboBox>
#include <QStandardItemModel>
#include <QListView>
#include <QKeyEvent>

class QLineEdit;
class QListView;

struct ItemInfo
{
    int idx;
    QString str;
    QVariant userData;
    bool bChecked;

    ItemInfo()
    {
        idx = -1;
        str = QString("");
        userData = QVariant();
        bChecked = false;
    }
};

class XListView : public QListView
{
    Q_OBJECT
public:
    XListView(QWidget *parent = Q_NULLPTR) :QListView(parent) {}
    ~XListView() {}

protected:
    void keyPressEvent(QKeyEvent* e)
    {
        e->accept();
    }
};

class KeyPressEater : public QObject
{
    Q_OBJECT
public:
    KeyPressEater(QObject* parent = nullptr) :QObject(parent) {}
    ~KeyPressEater() {}
signals:
    void sigActivated(int idx);

protected:
    bool eventFilter(QObject *obj, QEvent *event)
    {
        if (event->type() == QEvent::KeyPress)
        {
            QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
            if (keyEvent->key() == Qt::Key_Space)
            {
                QListView* lstV = qobject_cast<QListView*>(obj);
                if (nullptr != lstV)
                {
                    int idx = lstV->currentIndex().row();
                    if (-1 != idx)
                    {
                        emit sigActivated(idx);
                    }
                }
            }
            else if (keyEvent->key() == Qt::Key_Up || keyEvent->key() == Qt::Key_Down)
            {
                return QObject::eventFilter(obj, event);
            }

            return true;
        }
        else {
            // standard event processing
            return QObject::eventFilter(obj, event);
        }
    }
};

class XComboBox : public QComboBox
{
    Q_OBJECT

public:
    XComboBox(QWidget *parent = Q_NULLPTR);
    ~XComboBox();

    // ���item
    void AddItem(const QString& str, bool bChecked = false, QVariant const&userData = QVariant());
    void AddItems(const QList<ItemInfo>& lstItemInfo);
    void AddItems(const QMap<QString, bool>& mapStrChk);
    void AddItems(const QList<QString>& lstStr);
    // ɾ��item
    void RemoveItem(int idx);
    // ���item
    void Clear();
    // ��ȡѡ�е������ַ����б�
    QStringList GetSelItemsText();
    // ��ȡѡ��item����Ϣ
    QList<ItemInfo> GetSelItemsInfo();
    // ��ȡitem�ı�
    QString GetItemText(int idx);
    // ��ȡitem��Ϣ
    ItemInfo GetItemInfo(int idx);

signals:
    // popup��ʾ�ź�
    void showingPopup();
    // popup�����ź�
    void hidingPopup();

protected:
    void showPopup();
    // ��дQComboBox��hidePopup����
    // Ŀ��ѡ������У�������listview
    void hidePopup();
    virtual void mousePressEvent(QMouseEvent * event);
    virtual void mouseReleaseEvent(QMouseEvent * event);
    virtual void mouseMoveEvent(QMouseEvent * event);

private:
    void UpdateText();

private slots:
    void sltActivated(int idx);

private:
    QLineEdit* pLineEdit;
    QListView* pListView;
    QStandardItemModel m_model;
};
