#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream w("C:\\Users\\PC\\Desktop\\ravi\\cube.txt", _S_app);
    int num, cube;
    cout << "enter a num : ";
    cin >> num;
    cube = num * num * num;
    cout << "cube of " << num << " = " << cube << endl;
    w << "cube of " << num << " = " << cube << endl;
    w.close();
    return 0;
}