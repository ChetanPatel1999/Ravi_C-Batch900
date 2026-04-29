//here we take array element from user using array indxing
// and display array element using pointer.
#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int i, *ptr;
    ptr = arr;

    cout << "enter array elements : " << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }


    cout << "array element are : " << endl;
    for (i = 0; i < 5; i++) // 1
    {
        cout << *ptr << " ";
        ptr++; // 404
    }
    return 0;
}