#include <iostream>
using namespace std;
class mouse
{
    // data members
public:
    string color;
    int price;
    float rating;
};
int main()
{
    mouse m1, m2, m3;

    m1.price = 200;
    m1.color = "red";
    m1.rating = 3.5;

    cout << "mouse info : " << endl;
    cout << "mouse color : " << m1.color << endl;
    cout << "mouse price : " << m1.price << endl;
    cout << "mouse rating : " << m1.rating << endl;
    cout << "-----------------------\n\n";

    return 0;
}