#include <iostream>
using namespace std;
class car
{
    string modle;
    string color;
    int year;

public:
    car() {}
    car(string m, string c, int y)
    {
        modle = m;
        color = c;
        year = y;
    }
    car(string m, string c)
    {
        modle = m;
        color = c;
        year = 0;
    }
    car(string m)
    {
        modle = m;
        color = "none";
        year = 0;
    }
    void getCar()
    {
        cout << "car info : " << endl;
        cout << "car modle : " << modle << endl;
        cout << "car color : " << color << endl;
        cout << "car year : " << year << endl;
        cout << "-----------------------------" << endl;
    }
};
int main()
{

    car c1("Thar", "black", 2025);
    car c2("fortuner", "black", 2026);
    car c3("curve", "red");
    car c4("nexon");
    car c5;
    c1.getCar();
    c2.getCar();
    c3.getCar();
    c4.getCar();

    return 0;
}