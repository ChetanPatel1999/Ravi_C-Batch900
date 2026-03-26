// wap to print table
#include <iostream>
using namespace std;
int main()
{
    int num, i;
    cout << "enter  a num : ";
    cin >> num;
    for (i = 1; i <= 10; i++)
    {
        cout << num << " * " << i << " = " << num * i << endl;
    }

    return 0;
}