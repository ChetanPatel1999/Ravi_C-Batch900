// pointer to object
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
    }
};
int main()
{

    student s1;
    // s1.name = "ram";
    // s1.rno = 101;

    // s1.getStudent();

    student *ptr = &s1;

    // (*ptr).name = "ram";
    // (*ptr).rno = 101;

    (*ptr).setStudent("ram",101);

    (*ptr).getStudent();

    return 0;
}