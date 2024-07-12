#include "Class1.h"
#include <iostream>
#include "common.h"
using namespace std;

void Class1::Func1()
{
    cout << "func1" << endl;
    a = 33;
    b = 55;
    cout << "a " << a << endl;
    cout << "b " << b << endl;

    cout << "m_a " << Common().m_a << endl;
    cout << "m_b " << Common().m_b << endl;

    Common().m_a = 200;
}