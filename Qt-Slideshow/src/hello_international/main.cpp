#include <QApplication>
#include <QWidget>
#include <QPushButton>

#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication app(argc,argv);
    QTranslator appTranslator;
    appTranslator.load("./hello_cn.qm");
    app.installTranslator(&appTranslator);

    QWidget *widget = new QWidget();
    QPushButton *btn = 
	new QPushButton(QObject::tr("Hello,world!"),widget);
    widget->setGeometry(100,100,300,300);
    btn->setGeometry(20,20,150,80);
    widget->show();
    QObject::connect(btn, SIGNAL(clicked()), widget, SLOT(close()));
    return app.exec();
}
