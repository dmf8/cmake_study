#include "test_lib.h"
#include <iostream>

TestClass::TestClass()
{
}

TestClass::~TestClass()
{
}

void TestClass::Func(int v)
{
    std::cout << "test output value: " << v << std::endl;
}
