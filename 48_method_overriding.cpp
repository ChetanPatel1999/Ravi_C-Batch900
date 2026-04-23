#include <iostream>
using namespace std;
class base
{
public:
    void display()
    {
        cout << "base class display" << endl;
    }
};
class derived : public base
{
public:
    void display()  // method override
    {
        cout << "derived class display" << endl;
    }
};
int main()
{

    derived d1;
    d1.display();
    return 0;
}