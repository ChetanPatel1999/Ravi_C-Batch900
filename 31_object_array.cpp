#include <iostream>
using namespace std;
int count = 0; // global variable
class Employ
{
    int id;
    float sallary;

public:
    void setEmploy()
    {
        cout << "enter emp " << ++count << " Info : " << endl;
        cout << "enter id : ";
        cin >> id;
        cout << "enter sallary : ";
        cin >> sallary;
        cout << endl;
    }
    void getEmploy()
    {
        cout << "\n\nEmploy " << ++count << " info : " << endl;
        cout << "id : " << id << endl;
        cout << "sallary : " << sallary << endl;
        cout << "--------------------" << endl;
    }
};

int main()
{
    Employ emp[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        emp[i].setEmploy();
    }

    count = 0;

    for (i = 0; i < 3; i++)
    {
        emp[i].getEmploy();
    }
    return 0;
}