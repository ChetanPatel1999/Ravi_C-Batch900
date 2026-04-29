#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    int i, *ptr;
    ptr = &arr[0]; // 400
    cout << "array element are : " << endl;
    for (i = 0; i < 5; i++) //1
    {
        cout << *ptr << " ";
        ptr++; //408
    }
    return 0;
}