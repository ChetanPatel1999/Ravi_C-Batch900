// default paramter in function:-
#include <iostream>
using namespace std;
void add(int a = 10, int b = 50) // here b is default value parameter
{
    cout << "sum = " << (a + b) << endl;
}
void displayStudent(string name, int rno, float per, string city = "ujjain")
{
    cout << "student info : " << endl;
    cout << "student name : " << name << endl;
    cout << "student rno : " << rno << endl;
    cout << "student per : " << per << endl;
    cout << "student city : " << city << endl
         << endl;
}

void totalBill(int quantity, int price = 100)
{
    cout << "total bill : " << (quantity * price) << endl;
}
int main()
{

    totalBill(10, 50);
    totalBill(5, 200);
    totalBill(5, 200);
    totalBill(8);

    // displayStudent("raj", 101, 56.78, "indore");
    // displayStudent("ram", 102, 76.5);
    // displayStudent("mohan", 103, 46.5);

    // add(12, 8);
    // add(70);
    // add();
    return 0;
}