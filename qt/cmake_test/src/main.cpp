#include <QCoreApplication>
#include <iostream>
#include "module1/module1.cpp"
#include "module2/module2.cpp"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::cout<<"hello qt cmake1"<<std::endl;
    std::cout<<"m1 "<<m1<<std::endl;

    return a.exec();
}
