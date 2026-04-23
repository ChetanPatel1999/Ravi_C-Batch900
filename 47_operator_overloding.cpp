#include <iostream>
using namespace std;
class complex
{
    int real;
    int image;

public:
    complex() {}
    complex(int a, int b)
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
    complex c1(12, 6), c2(13, 9), c3;

    c1.getComplex();
    c2.getComplex();

    // c3 = c1.add(c2);
    c3 = c1 + c2;

    c3.getComplex();

    complex c4 = c1 - c2;
    c4.getComplex();

    return 0;
}