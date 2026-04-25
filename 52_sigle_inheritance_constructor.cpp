#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout << "base 0 arg constructor is called" << endl;
    }
    base(int a)
    {
        cout << "base 1 arg constructor is called" << endl;
    }
    base(int a, int b)
    {
        cout << "base 2 arg constructor is called" << endl;
    }
};
class derived : public base
{
public:
    derived() : base(56)
    {
        cout << "derived 0 arg constructor is called" << endl;
    }
    derived(int a)
    {
        cout << "derived 1 arg constructor is called" << endl;
    }

    derived(int a, int b) : base(a, b)
    {
        cout << "derived 2 arg constructor is called" << endl;
    }
};
int main()
{
    derived d1(7);
    return 0;
}