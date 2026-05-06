// create or  open a file using constructor
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream write("C:\\Users\\PC\\Desktop\\ravi\\abc.txt", _S_app);
    write << "this file open by constructor" << endl;
    write.close();
    return 0;
}