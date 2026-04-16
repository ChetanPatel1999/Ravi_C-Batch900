//reference variable
#include <iostream>
using namespace std;
int main()
{
    int a;
    a = 12;
    int &b = a;
    cout << &a << endl;
    cout << &b << endl;
    cout << "a = " << a << endl; // 12
    cout << "b = " << b << endl; // 12

    a = 90;

    cout << "a = " << a << endl; // 90
    cout << "b = " << b << endl; // 90

    b = 500;

    cout << "a = " << a << endl; // 500
    cout << "b = " << b << endl; // 500
    return 0;
}