// create or  open a file using open method
#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream write;
    write.open("C:\\Users\\PC\\Desktop\\ravi\\abc.txt");
    write<<"hello i am ravi";
    write.close();
    return 0;
}