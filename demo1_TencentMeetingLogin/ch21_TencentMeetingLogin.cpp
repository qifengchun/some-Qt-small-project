
#include "ch21_TencentMeetingLogin.h"
#include <QDebug>
#include <QIcon>
ch21_TencentMeetingLogin::ch21_TencentMeetingLogin(QWidget *parent)
    : QDialog(parent)
{
    ui.setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowMinimizeButtonHint);
    this->setStyleSheet("background-color:white;border:none");

    ui.btnSet->setText("");
    ui.btnSet->setStyleSheet("QPushButton{background-image:url(:/ch21_TencentMeetingLogin/resources/set.png);border:none} \
        QPushButton::hover{background-color:rgb(99,99,99)}");

    ui.btnMin->setText("");
    ui.btnMin->setStyleSheet("QPushButton{background-image:url(:/ch21_TencentMeetingLogin/resources/min.png);border:none} \
        QPushButton::hover{background-color:rgb(99,99,99)}");

    ui.btnClose->setText("");
    ui.btnClose->setStyleSheet("QPushButton{background-image:url(:/ch21_TencentMeetingLogin/resources/close.png);border:none} \
        QPushButton::hover{background-color:rgb(99,99,99)}");

  
    ui.label_logo->clear();// ��� label �ϵ�����
    std::unique_ptr<QPixmap> pix(new QPixmap(":/ch21_TencentMeetingLogin/resources/logo.jpg"));// ����ͼƬ��Դ������ QPixmap
    if (!pix->isNull()) {    // ��� QPixmap �Ƿ�ɹ�������ͼ��
        ui.label_logo->setPixmap(*pix);// ���� QPixmap �� label��������ԭʼͼ��Ŀ�߱���
        ui.label_logo->setScaledContents(true);
    }
    else {
        qDebug() << "Failed to load image.";
    }

    ui.btnWechatLogin->setText("");
    ui.btnWechatLogin->setStyleSheet("QPushButton{background-image:url(:/ch21_TencentMeetingLogin/resources/weichatlogin.png);border:none} \
        QPushButton::hover{background-color:rgb(99,99,99)}");

    ui.toolBtnPhone->setIcon(QIcon(":/ch21_TencentMeetingLogin/resources/phonelogin.png"));
    ui.toolBtnPhone->setIconSize(QSize(60, 60));
    ui.toolBtnPhone->setText(u8"�ֻ���");
    ui.toolBtnPhone->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    ui.toolBtnPhone->setStyleSheet("border:none");    

    ui.toolBtnEnpriseWechat->setIcon(QIcon(":/ch21_TencentMeetingLogin/resources/enpriseweichat.png"));
    ui.toolBtnEnpriseWechat->setIconSize(QSize(60, 60));
    ui.toolBtnEnpriseWechat->setText(u8"��ҵ΢��");
    ui.toolBtnEnpriseWechat->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    ui.toolBtnEnpriseWechat->setStyleSheet("border:none");

    ui.toolBtnSSO->setIcon(QIcon(":/ch21_TencentMeetingLogin/resources/sso.png"));
    ui.toolBtnSSO->setIconSize(QSize(60, 60));
    ui.toolBtnSSO->setText(u8"SSO");
    ui.toolBtnSSO->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    ui.toolBtnSSO->setStyleSheet("border:none");

    connect(ui.btnClose, &QPushButton::clicked, [=] {
        close();
        });

}

ch21_TencentMeetingLogin::~ch21_TencentMeetingLogin()
{}
