// one try block with multiple catch blcok
#include <iostream>
using namespace std;
int main()
{
    int x = 16;
    try
    {
        if (x >= 1 && x <= 10)
        {
            throw 12;
        }
        else if (x >= 11 && x <= 20)
        {
            throw 12.90;
        }
        else if (x >= 21 && x <= 30)
        {
            throw 'P';
        }
    }
    catch (int x)
    {
        cout << "int catch block is run " << endl;
    }
    catch (double x)
    {
        cout << "double catch block is run " << endl;
    }
    catch (...) // its catch each data type value
    {
        cout << "default catch block is run" << endl;
    }
    cout << "program run succefully";
    return 0;
}