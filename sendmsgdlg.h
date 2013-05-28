#ifndef SENDMSGDLG_H
#define SENDMSGDLG_H

#include <QDialog>

namespace Ui {
class SendMsgDlg;
}

class SendMsgDlg : public QDialog
{
    Q_OBJECT
    
public:
    explicit SendMsgDlg(QWidget *parent = 0);
    ~SendMsgDlg();
    
private:
    Ui::SendMsgDlg *ui;
};

#endif // SENDMSGDLG_H
