#include <iostream>
using namespace std;
class Demo
{
public:
    Demo() // constructor
    {
        cout << "constructor is called" << endl;
    }
    ~Demo() // destructor
    {
        cout << "destructor is called" << endl;
    }
    void display()
    {
        cout << "hi i am display" << endl;
    }
};
int main()
{
    Demo d1, d2;
    cout << "inside main function " << endl;
    Demo d3;
    d1.display();
    cout << "after display function" << endl;
    Demo *ptr= new Demo();
    delete ptr;
    {
        Demo d4;
        cout << "inside block" << endl;
        d4.display();
        cout << "block is end" << endl;
    }
    cout << "outside block" << endl;
    return 0;
}