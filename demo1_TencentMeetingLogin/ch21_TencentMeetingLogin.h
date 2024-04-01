#pragma once

#include <QtWidgets/QDialog>
#include "ui_ch21_TencentMeetingLogin.h"

class ch21_TencentMeetingLogin : public QDialog
{
    Q_OBJECT

public:
    ch21_TencentMeetingLogin(QWidget *parent = nullptr);
    ~ch21_TencentMeetingLogin();

private:
    Ui::ch21_TencentMeetingLoginClass ui;
};
