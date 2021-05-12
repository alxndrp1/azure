#include "scircle.h"
#include "ui_scircle.h"
#include "math.h"

double get_scircle(double r)
{
    return M_PI * r * r;
}

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

void scircle::on_pushButton_clicked()
{
    ui->label_3->setText(QString::number(get_scircle(ui->lineEdit->text().toDouble())));
}
