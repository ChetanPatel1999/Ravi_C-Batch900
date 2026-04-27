#include <iostream>
using namespace std;
class base
{
public:
    int a;

private:
    int b;

protected:
    int c;

public:
    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
    }
};
class derived : private base
{
public:
    void setData(int x, int y, int z)
    {
        a = x;
        // b = y;
        c = z;
    }
};
class secDerived : public derived
{
    void data()
    {
        // c = 456;
        // a= 456;
    }
};

class other
{
public:
    void show()
    {
        base obj;
        obj.a = 90;
        // obj.b = 45;
        // obj.c = 450;
        cout << "other base obj a = " << obj.a << endl;
    }
};

void fun()
{
    base obj;
    obj.a = 200;
    // obj.b = 78;
    // obj.c = 78;
}
int main()
{
    base obj1;
    obj1.a = 12;
    // obj1.b = 67;
    // obj1.c = 67;

    cout << obj1.a << endl;
    obj1.display();

    derived d1;
    // d1.a = 67;
    // d1.b = 69;
    d1.setData(67, 78, 34);
    // d1.display();

    other obj2;
    obj2.show();
    return 0;
}