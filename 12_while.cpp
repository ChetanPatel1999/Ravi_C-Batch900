#include <iostream>
using namespace std;
int main()
{
    int num = 567, rem, res = 0;
    while (num != 0)
    {
        rem = num % 10;
        res = res + rem;
        num = num / 10;
    }
    cout << "sum of individula digit : " << res;
    return 0;
}