#include <iostream>
using namespace std;
class Student
{
    string name;
    int rno;
    float fees;

public:
    void setStudent(string n, int r, float f)
    {
        name = n;
        rno = r;
        fees = f;
    }
    void getStudent()
    {
        cout << "student info : " << endl;
        cout << "student name : " << name << endl;
        cout << "student rno : " << rno << endl;
        cout << "student fees : " << fees << endl;
    }
};

class EngStd : public Student
{
    int sem;
    string branch;

public:
    void setEng(int s, string b)
    {
        sem = s;
        branch = b;
    }
    void getEng()
    {
        cout << "sem : " << sem << endl;
        cout << "branch : " << branch << endl;
        cout << "----------------------------" << endl;
    }
};

class MediStd : public Student
{
    int prof;
    string speci;

public:
    void setMedi(int s, string b)
    {
        prof = s;
        speci = b;
    }
    void getMedi()
    {
        cout << "prof : " << prof << endl;
        cout << "speci : " << speci << endl;
        cout << "----------------------------" << endl;
    }
};
int main()
{
    EngStd s1;
    s1.setStudent("raj", 101, 50000);
    s1.setEng(5, "CSE");
    s1.getStudent();
    s1.getEng();

    MediStd s2;
    s2.setStudent("ram", 111, 120000);
    s2.setMedi(2, "Artho");
    s2.getStudent();
    s2.getMedi();
    return 0;
}