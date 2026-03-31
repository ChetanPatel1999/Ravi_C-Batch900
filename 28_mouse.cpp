#include <iostream>
using namespace std;
class mouse
{
    // data members
    string color;
    int price;
    float rating;
    // methods
public:
    void setMouse(string c, int p, float r) // setter method
    {
        color = c;
        price = p;
        rating = r;
    }
    void getMouse() // getter method
    {

        cout << "mouse info : " << endl;
        cout << "mouse color : " << color << endl;
        cout << "mouse price : " << price << endl;
        cout << "mouse rating : " << rating << endl;
        cout << "-----------------------\n\n";
    }
};
int main()
{
    mouse m1, m2, m3;
    m1.setMouse("black", 200, 3.5);
    m2.setMouse("blue", 300, 4.5);
    m3.setMouse("white", 400, 4.9);

    m1.getMouse();
    m2.getMouse();
    m3.getMouse();
    return 0;
}