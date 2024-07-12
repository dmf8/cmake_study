#include <iostream>
#include "Class1.h"
#include "Class2.h"

int main()
{
    std::cout << "variable scope" << std::endl;
    Class1 c1;
    Class2 c2;
    c1.Func1();
    c2.Func2();
}