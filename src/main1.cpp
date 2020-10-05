#include <iostream>
#include <cstdlib>
#include "task4.h"

using namespace std;

int main()
{
    const int a = 5, b = 8;
    const double aa = 3.14, bb = 8.13;
    cout << comp1(&a,&b) << endl;;
    cout << comp2(&aa,&bb) << endl;;
    return 0;
}
