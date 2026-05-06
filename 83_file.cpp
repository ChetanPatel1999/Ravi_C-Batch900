// create or  open a file using constructor
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream write("C:\\Users\\PC\\Desktop\\ravi\\abc.txt");
    write << "this file open by constructor";
    write.close();
    return 0;
}