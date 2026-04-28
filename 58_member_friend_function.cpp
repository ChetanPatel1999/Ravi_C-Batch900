#include <iostream>
using namespace std;
class Data;
class other
{
public:
    void display1(Data);
    void display2(Data);
};
class Data
{
    int num1;
    int num2;
    friend void other::display1(Data);
    friend void other::display2(Data);

public:
    void setData(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
};

void other::display1(Data obj)
{
    cout << "num1 = " << obj.num1 << endl;
}
void other::display2(Data obj)
{
    cout << "num1 = " << obj.num2 << endl;
}
int main()
{

    Data o1;
    o1.setData(12, 5);
    other o2;
    o2.display1(o1);
    o2.display2(o1);

    return 0;
}