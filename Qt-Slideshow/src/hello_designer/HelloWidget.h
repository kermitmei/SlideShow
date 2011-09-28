#ifndef _HELLOWIDGET_H_
#define _HELLOWIDGET_H_

#include <QWidget>
#include "ui_HelloWidget.h"

class HelloWidget : public QWidget,
		    public Ui::HelloWidget
{
    Q_OBJECT
public:
    HelloWidget(QWidget *parent = 0);
    ~HelloWidget();
};

#endif//_HELLOWIDGET_H_
