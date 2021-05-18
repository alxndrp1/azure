#ifndef SCIRCLE_H
#define SCIRCLE_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class scircle; }
QT_END_NAMESPACE

class Scircle : public QWidget
{
    Q_OBJECT

public:
    Scircle(QWidget *parent = nullptr);
    ~Scircle();
    double get_scircle(double r);

private slots:
    void on_pushButton_clicked();

private:
    Ui::scircle *ui;
};
#endif // SCIRCLE_H
