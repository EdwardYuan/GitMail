#include "sendmsgdlg.h"
#include "ui_sendmsgdlg.h"

SendMsgDlg::SendMsgDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SendMsgDlg)
{
    ui->setupUi(this);
}

SendMsgDlg::~SendMsgDlg()
{
    delete ui;
}
