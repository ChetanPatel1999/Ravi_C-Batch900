#include <iostream>
using namespace std;
int main()
{
    int a = 12;
    int *ptr = &a;

    cout << "a = " << a << endl;
    cout << "&a = " << &a << endl;
    cout << "ptr = " << ptr << endl;
    cout << "*ptr = " << *ptr << endl;

    *ptr = 200; // change value of variable using pointer

    cout << "a = " << a << endl;
    cout << "*ptr = " << *ptr << endl;

    (*ptr)++;

    cout << "a = " << a << endl;       // 201
    cout << "*ptr = " << *ptr << endl; // 201

    ptr++; //  its  increse pointer value by 4

    cout << "&a = " << &a << endl;
    cout << "ptr = " << ptr << endl;

    // cout << "*ptr = " << *ptr << endl;
}