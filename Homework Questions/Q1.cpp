#include <iostream>
using namespace std;

int main()
{
    int a, b = 1;

    a = 10;

    if (++a)
        cout << b;
    else
        cout << ++b;

    return 0;
}
// output will be 1. Because ++a is pre increment operation so value of a will increase when the if statement executes and will print b.