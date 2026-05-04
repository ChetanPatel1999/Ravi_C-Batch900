// template with multiple parameter
#include <iostream>
using namespace std;

template <class T1, class T2>
class Data
{
    T1 num1;
    T2 num2;

public:
    Data(T1 a, T2 b)
    {
        num1 = a;
        num2 = b;
    }
    void getData()
    {
        cout << "Data info : " << endl;
        cout << "num1 : " << num1 << endl;
        cout << "num2 : " << num2 << endl;
    }
};

int main()
{
    Data<int, float> d1(12, 6.9);
    d1.getData();

    Data<string, float> d2("hello", 7.8);
    d2.getData();

    Data<int, char> d3(12, 'H');
    d3.getData();

    Data<string, string> d4("home", "pen");
    d4.getData();
    return 0;
}