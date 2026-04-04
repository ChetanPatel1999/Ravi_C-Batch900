#include <iostream>
using namespace std;
class Demo
{
    int a; // instance variable
    int b;
    static int c; // class variable
    static int d;

public:
    void setData(int w, int x, int y, int z)
    {
        a = w;
        b = x;
        c = y;
        d = z;
    }
    void display()
    {
        cout << "a,b = " << a << "," << b << endl;
        cout << "c,d = " << c << "," << d << endl;
    }
};
int Demo::c;
int Demo::d;
int main()
{
    // Demo d1, d2, d3;
    // d1.setData(12, 13, 400, 500);
    // d2.setData(14, 15, 600, 700);
    // d3.setData(16, 17, 800, 900);

    // d1.display();
    // d2.display();
    // d3.display();
    return 0;
}