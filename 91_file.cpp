#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream read("C:\\Users\\PC\\Desktop\\ravi\\student.txt");
    string s;
    while (read.eof() != 1)
    {
        read >> s;
        cout << s<<" ";
    }

    read.close();
    return 0;
}