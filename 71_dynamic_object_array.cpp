#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int rno;

public:
    student()
    {
        cout << "enter student info : " << endl;
        cout << "enter student name : ";
        cin >> name;
        cout << "enter student rno : ";
        cin >> rno;
    }
    void getStudent()
    {
        cout << "student info : " << endl;
        cout << "name : " << name << endl;
        cout << "rno : " << rno << endl;
        cout << "----------------------" << endl;
    }
};
int main()
{

    student *ptr = new student[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        ptr->getStudent();
        ptr++;
    }
}