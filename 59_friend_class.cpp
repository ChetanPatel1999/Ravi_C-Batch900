#include <iostream>
using namespace std;
class other;
class Data
{
    int num1;
    int num2;
    friend other;

public:
    void setData(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
};

class other
{
public:
    void display1(Data obj)
    {
        cout << "num1 = " << obj.num1 << endl;
    }
    void display2(Data obj)
    {
        cout << "num1 = " << obj.num2 << endl;
    }
};
int main()
{

    Data o1;
    o1.setData(12, 5);
    other o2;
    o2.display1(o1);
    o2.display2(o1);

    return 0;
}