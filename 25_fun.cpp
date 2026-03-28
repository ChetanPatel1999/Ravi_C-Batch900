// with return type , with parameter
#include <iostream>
using namespace std;
int cube(int num)
{
    int res;
    res = num * num * num;
    return res;
}

int main()
{
    int ans = cube(3);
    cout << "cube = " << ans << endl;

    cout << "cube = " << cube(2);
    return 0;
}
