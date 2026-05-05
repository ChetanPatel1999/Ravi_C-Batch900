#include <iostream>
using namespace std;
int main()
{
    int x = 65;
    try
    {
        cout << "inside try" << endl;
        if (x < 0)
        {
            throw x;
        }
        cout << "value of x = " << x << endl;
        cout << "try run succesfuly" << endl;
    }
    catch (int data)    
    {
        cout << "nagative value error" << endl;
    }
    cout << "its always run ouside try-catch block stmnt1" << endl;
    cout << "its always run ouside try-catch block stmnt2" << endl;
    cout << "its always run ouside try-catch block stmnt3" << endl;
    return 0;
}