#include <QApplication>
#include <HelloWidget.h>


int main(int argc, char *argv[])
{
    QApplication app(argc,argv);
    HelloWidget helloWidget;
    helloWidget.show();
    return app.exec();
}
