#include <iostream>
using namespace std;
class student
{
    string name;
    int rno;
    float per;
    static int totalStd;
    static int totalPass;
    static int totalFail;
    static string collage;

public:
    void setStudent(string n, int r, float p)
    {
        name = n;
        rno = r;
        per = p;
        totalStd++;
        if (per > 33)
        {
            totalPass++;
        }
        else
        {
            totalFail++;
        }
    }

    void getResultCard()
    {
        cout << "Student Result Card...." << endl;
        cout << "Collage Name : " << collage << endl;
        cout << "Student Name : " << name << endl;
        cout << "Student Rno : " << rno << endl;
        if (per > 33)
        {
            cout << "student Pass with " << per << " percentage" << endl;
        }
        else
        {
            cout << "student Fail with " << per << " percentage" << endl;
        }
        cout << "-------------------------------------\n"
             << endl;
    }

    static void getTotalStudent()
    {
        cout << "total student : " << totalStd << endl;
        cout << "-------------------------------------\n\n";
    }

    static void getTotalResult()
    {

        cout << "totaPass : " << totalPass << endl;
        cout << "totaFail : " << totalFail << endl;
        cout << "-------------------------------------\n\n";
    }

    static void m1(int b)
    {
        int a = 12;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }

    static void classInfo()
    {
        cout << "this is student class" << endl;
        cout << "we can set and dispaly result card using this class methods" << endl;
        cout << "inside class methos : " << endl;
        cout << "setStudent(name,rno,per): " << endl;
        cout << "getStudent(): " << endl;
        cout << "------------------------------------------" << endl;
    }
    void average(student obj1)
    {
        float ave;
        ave = (per + obj1.per) / 2.0;
        cout << "average = " << ave << endl;
        cout << "------------------------------------------" << endl;
    }

    static void average(student obj1, student obj2)
    {
        float ave;
        ave = (obj1.per + obj2.per) / 2.0;
        cout << "average = " << ave << endl;
        cout << "------------------------------------------" << endl;
    }
    static void average(student obj1, student obj2, student obj3)
    {
        float ave;
        ave = (obj1.per + obj2.per + obj3.per) / 3.0;
        cout << "average = " << ave << endl;
        cout << "------------------------------------------" << endl;
    }

    
};
int student::totalStd = 0;
int student::totalPass = 0;
int student::totalFail = 0;
string student::collage = "hello world institute";

int main()
{

    student s1, s2, s3, s4;
    s1.setStudent("mayank", 101, 40);
    s2.setStudent("nishi", 102, 92);
    s3.setStudent("ravi", 103, 9);
    s4.setStudent("khusi ", 104, 7);

    s1.getResultCard();
    s2.getResultCard();
    s3.getResultCard();
    s4.getResultCard();

    student::getTotalStudent();
    student::getTotalResult();

    // s1.average(s2);

    // s3.average(s4);

    student::average(s1, s2);
    student::average(s1, s2, s3);
    return 0;
}