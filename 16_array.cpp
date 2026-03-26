// array in cpp
#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int i;
    cout << "enter arrey element : \n";
    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "array elements are : ";
    for (i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    // sumof array element
    int sum = 0;
    for (i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    cout<<"\nsum of array element : "<<sum<<endl;
    return 0;
}