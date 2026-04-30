
#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int rno;

public:
    void setStudent(string n, int r)
    {
        name = n;
        rno = r;
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

    student *ptr1 = new student;
    student *ptr2 = new student;

    ptr1->setStudent("dev", 101);
    ptr2->setStudent("harry", 102);

    ptr1->getStudent();
    ptr2->getStudent();

    return 0;
}