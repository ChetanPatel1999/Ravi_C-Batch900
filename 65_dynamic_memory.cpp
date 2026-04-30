// dynamic memory :-  in c++ new keyword is used to allocate dynamic memory
#include <iostream>
using namespace std;
int main()
{
    int *ptr1 = new int;
    *ptr1 = 70;
    cout << "*ptr1 value = " << *ptr1 << endl;

    delete ptr1;

    char *ptr2 = new char('Z');
    cout << "*ptr2 value = " << *ptr2 << endl;

    delete ptr2;

    float *ptr3 = new float(4.6);
    cout << "*ptr3 value = " << *ptr3 << endl;
    delete ptr3;
    return 0;
}