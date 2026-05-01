#include <iostream>
using namespace std;
class base
{
protected:
    int num1;

public:
    base(int a)
    {
        num1 = a;
    }
    virtual void display()
    {
        cout << "num1 : " << num1 << endl;
    }
};
class derived : public base
{
    int num2;

public:
    derived(int a, int b) : base(a)
    {
        num2 = b;
    }
    void display()
    {
        cout << "num1 : " << num1 << endl;
        cout << "num2 : " << num2 << endl;
    }
};
int main()
{
    base *ptr;
    ptr = new base(12);
    ptr->display();

    ptr = new derived(100, 200);
    ptr->display();
    return 0;
}