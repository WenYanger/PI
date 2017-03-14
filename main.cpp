#include <QCoreApplication>
#include <math.h>
#include <iostream>
#include <iomanip>     // 用于设置cout精度 std::setprecision(20);
#include <QDebug>      // 用于检查运行时间
#include <sys/time.h>  // 用于检查运行时间
#include <algorithm.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    struct timeval tpstart,tpend;
    float timeuse;
    gettimeofday(&tpstart,NULL);

    Algorithm * al = new Algorithm();
    //long double pi = al->Vieta(30000);
    //long double pi = al->Leibniz(20000000);
    //long double pi = al->Newton(30);
    long double pi = al->Newton_Leibniz(200000);
    //long double pi = al->Sharp(1000000);
    //long double pi = al->Euler(65000);

    std::cout<<std::setprecision(30);
    std::cout<<pi<<std::endl;

    gettimeofday(&tpend,NULL);
    timeuse=(1000000*(tpend.tv_sec-tpstart.tv_sec) + tpend.tv_usec-tpstart.tv_usec)/1000000.0;
    qDebug()<<timeuse<<"s";

    return a.exec();
}


