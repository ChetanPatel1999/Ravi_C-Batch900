#include <iostream>
using namespace std;
int main()
{
    string city[5];

    int i;
    cout << "enter city names : " << endl;
    for (i = 0; i < 5; i++) // 1
    {
        cin >> city[i];
    }

    cout << "city names " << endl;
    for (i = 0; i < 5; i++) // 1
    {
        cout << city[i] << endl;
    }

    return 0;
}