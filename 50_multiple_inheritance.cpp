// ambiguty error
#include <iostream>
using namespace std;
class base1
{
public:
    void greet()
    {
        cout << "good morning students" << endl;
    }
};
class base2
{
public:
    void greet()
    {
        cout << "good after-noon students" << endl;
    }
};
class derived : public base1, public base2
{
public:
    void greet()
    {
        cout << "hello" << endl;
        base1::greet();
        base2::greet();
    }
};
int main()
{
    derived obj;
    obj.greet();
    return 0;
}