#include <QtTest>
#include <QCoreApplication>
#include <../../scircle/scircle.h>


class addR : public QObject
{
    Q_OBJECT

public:
    addR();

private slots:
    void testCase1_data();
    void testCase1();
};

addR::addR() { }

void addR::testCase1_data()
{
    QTest::addColumn<double>("R");
    QTest::addColumn<double>("result");

    QTest::newRow("compare01") << 0.0 << 0.0;
    QTest::newRow("compare02") << 1.0 << 3.14159265358979;
    QTest::newRow("compare03") << 7.0 << 153.9380400259;
    QTest::newRow("compare04") << 18.0 << 1017.87601976309;
    QTest::newRow("compare05") << 1.1 << 2.2;
}

void addR::testCase1()
{
    Scircle test;

    QFETCH(double, R);
    QFETCH(double, result);

    double actual = test.get_scircle(R);
    QCOMPARE(actual, result);
}

QTEST_MAIN(addR)

#include "tst_addr.moc"
