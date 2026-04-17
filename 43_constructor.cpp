#include <iostream>
using namespace std;
class bottole
{
    int price;
    float capacity;
    string color;

public:
    // bottole() // non parameterized
    // {
    //     price = 20;
    //     capacity = 2.5;
    //     color = "blue";
    // }

    // bottole() // non parameterized
    // {
    //     cout << "enter info : " << endl;
    //     cout << "enter price : ";
    //     cin >> price;
    //     cout << "enter capacity : ";
    //     cin >> capacity;
    //     cout << "enter color : ";
    //     cin >> color;
    // }
    bottole() {}
    bottole(int p, float c, string co = "white") // parameterized
    {
        price = p;
        capacity = c;
        color = co;
    }

    bottole(bottole &obj) // copy constructor
    {
        cout << "copy constructor is called" << endl;
        price = obj.price + 10;
        capacity = obj.capacity;
        color = obj.color;
    }
    void getBottle()
    {

        cout << "bottole info : " << endl;
        cout << "price : " << price << endl;
        cout << "capacity : " << capacity << endl;
        cout << "color : " << color << endl;
        cout << "---------------------------" << endl
             << endl;
    }
};
int main()
{
    bottole b1(10, 1.00, "red"), b2(b1), b3 = b1;
    bottole b4;
    b4 = b1; // default copy constructor is called
    b1.getBottle();
    b2.getBottle();
    b3.getBottle();
    b4.getBottle();
    return 0;
}