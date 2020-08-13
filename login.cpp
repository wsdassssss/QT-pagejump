#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    setWindowTitle("登录界面");
}

login::~login()
{
    delete ui;
}

void login::on_btn_login_clicked()
{
    MainWindow *main=new MainWindow(this);
    main->show();
    connect(main,SIGNAL(mysignal()),this,SLOT(menu_slot()));
    this->hide();
}
void login::menu_slot(){
    this->show();
}
