#include <iostream>
using namespace std;
int main()
{
    string s1 = "mahendra singh dhoni";
    char s2[10];

    // s1.copy(charArray, totalchar , start_pos);
    s1.copy(s2, 5, 2);

    int i;
    for (i = 0; i < 5; i++)
    {
        cout << s2[i];
    }
    return 0;
}