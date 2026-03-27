#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter a character : ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        cout << "char is alphabet";
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "char is digit";
    }
    else
    {
        cout << "char is special symbol";
    }

    return 0;
}
