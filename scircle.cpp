#include "scircle.h"
#include "ui_scircle.h"
#include "math.h"

Scircle::Scircle(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::scircle)
{
    ui->setupUi(this);
}

Scircle::~Scircle()
{
    delete ui;
}

double Scircle::get_scircle(double r)
{
    return M_PI * r * r;
}

void Scircle::on_pushButton_clicked()
{
    ui->label_3->setText(QString::number(get_scircle(ui->lineEdit->text().toDouble())));
}
