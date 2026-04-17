#include <iostream>
using namespace std;
void fun(int &num)
{
    cout << "num = " << num << endl; // 12
    num = 90;
    cout << "num = " << num << endl; // 90
}
int main()
{

    int a = 12;
    cout << "a = " << a << endl; // 12
    fun(a);
    cout << "a = " << a << endl; // 90
    return 0;
}