#include <iostream>
using namespace std;
class base1
{
public:
    base1()
    {
        cout << "base1 0 arg constructor is called" << endl;
    }
    base1(int a)
    {
        cout << "base1 1 arg constructor is called" << endl;
    }
};

class base2
{
public:
    base2()
    {
        cout << "base2 0 arg constructor is called" << endl;
    }
    base2(int a)
    {
        cout << "base2 1 arg constructor is called" << endl;
    }
};

class derived : public base2, public base1
{
public:
    derived() : base1(34), base2(5)
    {
        cout << "derived 0 arg constructor is called " << endl;
    }
    derived(int a)
    {
        cout << "derived 1 arg constructor is called " << endl;
    }
};
int main()
{

    derived d1(8);
    return 0;
}