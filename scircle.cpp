#include "scircle.h"
#include "ui_scircle.h"

scircle::scircle(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::scircle)
{
    ui->setupUi(this);
}

scircle::~scircle()
{
    delete ui;
}

