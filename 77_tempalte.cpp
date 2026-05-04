#include <iostream>
using namespace std;

template <class T>
class complex
{
    T real;
    T image;

public:
    complex() {}
    complex(T a, T b)
    {
        real = a;
        image = b;
    }
    void getComplex()
    {
        cout << "complex number : (" << real << " + " << image << "i)" << endl;
    }

    complex operator+(complex obj)
    {
        complex res;
        res.real = real + obj.real;
        res.image = image + obj.image;
        return res;
    }
    complex operator-(complex obj)
    {
        complex res;
        res.real = real - obj.real;
        res.image = image - obj.image;
        return res;
    }
};
int main()
{
    complex<int> c1(12, 6), c2(13, 9), c3;

    c1.getComplex();
    c2.getComplex();
    c3 = c1 + c2;
    c3.getComplex();
    complex<int> c4 = c1 - c2;
    c4.getComplex();

    cout << "--------------------------------" << endl;
    complex<float> c5(3.4, 6.1), c6(4.5, 2.6), c7;
    c5.getComplex();
    c6.getComplex();
    c7 = c5 + c6;
    c7.getComplex();

    return 0;
}