#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int rno;
    string name;
    string city;
    ofstream write("C:\\Users\\PC\\Desktop\\ravi\\student.txt", _S_app);
    cout << "enter rno : ";
    cin >> rno;
    cout << "enter name : ";
    cin >> name;
    cout << "enter city : ";
    cin >> city;

    write << rno << "  " << name << "  " << city << endl;
    return 0;
}