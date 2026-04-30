
#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int rno;

public:
    student(string n, int r)
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

    student *ptr1 = new student("ravi", 101);
    student *ptr2 = new student("nishi", 102);

    ptr1->getStudent();
    ptr2->getStudent();

    return 0;
}