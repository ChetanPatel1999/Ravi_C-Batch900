#include <iostream>
using namespace std;
class Data
{
    int num1;
    int num2;
    friend void display(Data);

public:
    void setData(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
};

void display(Data obj)
{
    cout << "num1 = " << obj.num1 << endl;
    cout << "num2 = " << obj.num2 << endl;
}
int main()
{

    Data o1;
    o1.setData(12, 5);
    display(o1);
    return 0;
}