#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream read("C:\\Users\\PC\\Desktop\\ravi\\student.txt");
    string s;
    read >> s;
    cout << s;
    read >> s;
    cout << s;
    read.close();
    return 0;
}