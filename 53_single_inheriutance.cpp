#include <iostream>
using namespace std;
class emp
{
    int id;
    float salary;

public:
    emp(int i, float s)
    {
        id = i;
        salary = s;
    }
    void getEmp()
    {
        cout << "emp info : " << endl;
        cout << "id : " << id << endl;
        cout << "salary : " << salary << endl;
    }
};

class programer : public emp
{
    string project;

public:
    programer(int i, float s, string p) : emp(i, s)
    {
        project = p;
    }

    void getProgramer()
    {
        getEmp();
        cout << "project : " << project << endl;
    }
};
int main()
{
    programer p1(101, 12000, "e-commerse");

    p1.getProgramer();
    return 0;
}