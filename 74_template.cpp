#include <iostream>
using namespace std;

template <class T>
class Data
{
    T num1;
    T num2;

public:
    Data(T a, T b)
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
    Data<int> d1(12, 6);
    d1.getData();

    Data<float> d2(4.5, 7.8);
    d2.getData();

    Data<char> d3('A', 'H');
    d3.getData();

    Data<string> d4("home", "pen");
    d4.getData();
    return 0;
}