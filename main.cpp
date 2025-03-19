#include "action.h"
#include "mainwidget.h"
#include "serverconnect.h"
#include "serverreceive.h"
#include "user.h"

#include <QApplication>
//extern User user;  // 声明全局变量
static int n = 0;  // 声明全局变量
int main(int argc, char *argv[])
{
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);  // 启用高DPI缩放（某些情况下有影响）

    QApplication a(argc, argv);
    Action w;
    MainWidget mainWidget;

    if(n == 0){
        w.show();
        QObject::connect(ServerReceive::instance(),&ServerReceive::loginSuccess, [&](User user) {
            n = 1;
            w.hide();  // 隐藏登录界面
            mainWidget.initialMainWidget(user);
            mainWidget.show();   // 显示主界面

        });
    }else{
        mainWidget.show();   // 显示主界面
    }


    return a.exec();
}

