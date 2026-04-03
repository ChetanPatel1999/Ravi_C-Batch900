#include <iostream>
using namespace std;
class Employ
{
    int id;
    float sallary;

public:
    void setEmploy()
    {
        cout << "enter emp Info : " << endl;
        cout << "enter id : ";
        cin >> id;
        cout << "enter sallary : ";
        cin >> sallary;
        cout << endl;
    }
    void getEmploy()
    {
        cout << "\n\nEmploy info : " << endl;
        cout << "id : " << id << endl;
        cout << "sallary : " << sallary << endl;
        cout << "--------------------" << endl;
    }
};
int main()
{
    Employ e1, e2, e3,e4,e5,;
    e1.setEmploy();
    e2.setEmploy();
    e3.setEmploy();

    e1.getEmploy();
    e2.getEmploy();
    e3.getEmploy();
    return 0;
}