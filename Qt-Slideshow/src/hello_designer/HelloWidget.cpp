#include "HelloWidget.h"

HelloWidget::HelloWidget(QWidget *parent)
    : QWidget(parent)
{
    //用于加载Designer中的设置
    setupUi(this);
}

HelloWidget::~HelloWidget()
{
    ;
}
