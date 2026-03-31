#include <iostream>
using namespace std;

char upercase(char ch)
{
    return ch - 32;
}

float average(int a, int b)
{
    return (a + b) / 2.0;
}

string combineName(string fn, string ln)
{
    string fullName;
    fullName = fn + " " + ln;
    return fullName;
}

int main()
{

    cout << "my name : " << combineName("ram", "sharma");

    // cout << "average = " << average(12, 7) << endl;
    // cout << "uparcase = " << upercase('a');
    
    return 0;
}