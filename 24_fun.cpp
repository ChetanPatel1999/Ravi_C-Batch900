// no return type ,but with  parameter
#include <iostream>
using namespace std;
void cube(int num)
{
    int res;
    res = num * num * num;
    cout << "cube of " << num << " = " << res << endl;
}

void displayName(string fristName, string lastName)
{
    string fullName;
    fullName = fristName + " " + lastName;
    cout << "your name is : " << fullName;
}

void searchCharGivenIndex(string s, char ch, int index)
{
    int i;
    bool isFind = false;
    // hello indore
    for (i = 0; i <= index; i++)
    {
        if (s[i] == ch)
        {
            isFind = true;
            break;
        }
    }
    if (isFind == false)
    {
        cout << "char is not found";
    }
    else
    {
        cout << "char is found";
    }
}
int main()
{

    // displayName("ram", "sharma");
    searchCharGivenIndex("hello indore", 'p', 7);

    // cube(4);
    // cube(6);
    // cube(8);
    return 0;
}