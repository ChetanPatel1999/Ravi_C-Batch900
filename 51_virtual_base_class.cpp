//virtual base class concept.
#include <iostream>
using namespace std;
class base
{
public:
    void display()
    {
        cout << "hi i am base display" << endl;
    }
};
class derived1 : virtual public base
{

};
class derived2 : virtual public base
{

};

class lastDerived : public derived1, public derived2
{
public:
    void print()
    {
        cout << "hello students" << endl;
    }
};
int main()
{
    lastDerived d1;
    d1.print();
    d1.display();
    return 0;
}