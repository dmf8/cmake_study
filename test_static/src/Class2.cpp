#include "Class2.h"
#include <iostream>
#include "common.h"
using namespace std;

void Class2::Func2()
{
    cout << "func2" << endl;
    cout << "a " << a << endl;
    cout << "b " << b << endl;

    cout << "m_a " << Common().m_a << endl;
    cout << "m_b " << Common().m_b << endl;
}