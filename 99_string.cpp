#include <iostream>
using namespace std;
int main()
{

    string s1 = "ram";
    string s2 = "ram";

    if (s1.compare(s2) == 0)
    {
        cout << "string are same" << endl;
    }
    else
    {
        cout << "string are not same" << endl;
    }

    return 0;
}