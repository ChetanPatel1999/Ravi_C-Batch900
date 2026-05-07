#include <iostream>
using namespace std;
int main()
{
    string s = "mahendra singh dhoni";
    string s2;

    // s.substr(start-pos , total_char);
    // s2 = s.substr(15, 5);

    // cout << "substring : " << s2;

    
    s.replace(9, 5, "ram");

    cout << s;
    return 0;
}