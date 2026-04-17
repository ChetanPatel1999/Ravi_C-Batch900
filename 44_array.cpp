#include <iostream>
using namespace std;
class bottole
{
    int price;
    float capacity;
    string color;

public:
    bottole()
    {
        cout << "enter info : " << endl;
        cout << "enter price : ";
        cin >> price;
        cout << "enter capacity : ";
        cin >> capacity;
        cout << "enter color : ";
        cin >> color;
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
    bottole b[3];

    int i;
    for (i = 0; i < 3; i++)
    {
        b[i].getBottle();
    }

    return 0;
}