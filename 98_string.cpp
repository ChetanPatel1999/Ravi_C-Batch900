// string class methods
#include <iostream>
using namespace std;
int main()
{

    string s = "mayank";
    cout << "string = " << s << endl;

    // s.append("sharma");   // appen method add data at the string end
    // s.push_back('d');   // its also append  single character at the end of string

    // s.clear(); // its clear all data from string

    // char ch = s.at(4);
    // cout << "charcter = " << ch << endl;

    int res = s.compare("ram");
    cout<<"res = "<<res<<endl;
    cout << "string = " << s << endl;

    return 0;
}