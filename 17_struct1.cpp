#include <iostream>
using namespace std;
struct student
{
    string name;
    int rno;
    float per;
};

int main()
{
    student s1, s2;
    s1.name = "ravi sisodiya";
    s1.per = 12.34;
    s1.rno = 101;

    cout << "student info : \n";
    cout << "name : " << s1.name << endl;
    cout << "rno : " << s1.rno << endl;
    cout << "per : " << s1.per << endl;

    return 0;
}