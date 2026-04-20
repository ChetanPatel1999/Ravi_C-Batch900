#include <iostream>
using namespace std;
class A
{
public:
    int age;
    void m1()
    {
        cout << "class A m1 method" << endl;
    }
    void m2()
    {
        cout << "class A m2 method" << endl;
    }
};
class B:public A
{
public:
    void m3()
    {
        cout << "class B m3 method" << endl;
    }
    void m4()
    {
        cout << "class B m4 method" << endl;
    }
};
int main()
{
    B obj;
    obj.age = 78;
    obj.m1();
    obj.m2();
    obj.m3();
    obj.m4();

    // A obj;
    // obj.m1();
    // obj.m2();
    return 0;
}