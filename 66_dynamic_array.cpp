#include <iostream>
using namespace std;
int main()
{

    int *ptr = new int[5]; // 400
    int *temp = ptr;
    int i;
    cout << "enter array elements : " << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> *ptr;
        ptr++; // 420
    }

    // ptr = ptr - 5;
    ptr = temp;
    cout << "display array element : " << endl;
    for (i = 0; i < 5; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }

    ptr = temp;

    int sum = 0;
    for (i = 0; i < 5; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    cout << "\nsum of array element = " << sum;
    return 0;
}