#ifndef SCIRCLE_H
#define SCIRCLE_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class scircle; }
QT_END_NAMESPACE

class scircle : public QWidget
{
    Q_OBJECT

public:
    scircle(QWidget *parent = nullptr);
    ~scircle();

private:
    Ui::scircle *ui;
};
#endif // SCIRCLE_H
