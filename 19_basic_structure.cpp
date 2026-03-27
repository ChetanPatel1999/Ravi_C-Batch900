#include <iostream>
using namespace std;
int main()
{
    int age;
    cin >> age; //( :: )---> scopresolution operator
    cout << "age : " << age << endl;

    int a, b, c;
    cout << "enter a : ";
    cin >> a;
    cout << "enter b : ";
    cin >> b;
    c = a + b;
    cout << "addition = " << c << endl;

    return 0;
}
