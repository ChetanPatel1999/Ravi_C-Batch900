#include <iostream>
using namespace std;
int main()
{
    string city[5] = {"indore", "ujjain", "mhow", "bhopal", "ratlam"};

    int i;
    for (i = 0; i < 5; i++) // 1
    {
        cout << city[i] << endl;
    }

    return 0;
}