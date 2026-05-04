#include <iostream>
using namespace std;

template <class T>
void display(T a)
{
    cout << "data : " << a << endl;
}

template <class T1, class T2>
float multi(T1 a, T2 b)
{
    return a * b;
}

int main()
{

    cout << "ans = " << multi(4, 5.8) << endl;
    cout << "ans = " << multi(4.5, 5.2) << endl;
    cout << "ans = " << multi(4.5, 5) << endl;

    display(12);
    display(8.9);
    display('P');
    display("ram");
    return 0;
}