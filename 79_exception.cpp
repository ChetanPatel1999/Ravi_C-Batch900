#include <iostream>
using namespace std;
int main()
{
    cout << "my program is start .... " << endl;
    int a, b, c;
    cout << "enter a : ";
    cin >> a;
    cout << "enter b : ";
    cin >> b;
    try
    {
        if (b == 0)
        {
            throw b;
        }
        c = a / b;
        cout << "division = " << c << endl;
        cout << "division run succefully" << endl;
    }
    catch (int b)
    {
        cout << "zero division error" << endl;
    }
    cout << "this is addition app : " << endl;
    cout << "enter a : ";
    cin >> a;
    cout << "enter b : ";
    cin >> b;
    c = a + b;
    cout << "addition  = " << c << endl;
    cout << "program run succefully" << endl;

    return 0;
}