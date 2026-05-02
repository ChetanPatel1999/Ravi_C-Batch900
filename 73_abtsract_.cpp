#include <iostream>
using namespace std;
class base
{
public:
    virtual void display() = 0;
    virtual void show() = 0;
    void fun()
    {
        cout << "hello i am fun of base class" << endl;
    }
};

class derived : public base
{
public:
    void m1()
    {
        cout << "derived m1 is called" << endl;
    }
    void display()
    {
        cout << "display is override" << endl;
    }
    void show()
    {
        cout << "show is override" << endl;
    }
};
int main()
{
    derived d1;
    d1.display();
    d1.fun();
    d1.m1();
    d1.show();

    return 0;
}