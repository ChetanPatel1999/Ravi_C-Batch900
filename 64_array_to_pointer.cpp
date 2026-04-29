// here we take array element from user using pointer
//  and display array element using pointer.
#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int i, *ptr;
    ptr = arr; // 400

    cout << "enter array elements : " << endl;
    for (i = 0; i < 5; i++) // 3
    {
        cin >> *(ptr + i);
    }

    cout << "array element are : " << endl;
    for (i = 0; i < 5; i++) // 1
    {
        cout << *(ptr + i) << " ";
    }

    return 0;
}