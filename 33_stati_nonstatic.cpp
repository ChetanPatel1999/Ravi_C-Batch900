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

    void getTotalStudent()
    {
        cout << "total student : " << totalStd << endl;
        cout << "-------------------------------------\n\n";
            
    }

    void getTotalResult()
    {
        cout << "totaPass : " << totalPass << endl;
        cout << "totaFail : " << totalFail << endl;
        cout << "-------------------------------------\n\n";
           
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

    s1.getTotalStudent();
    s1.getTotalResult();
    return 0;
}