//no return type , no parameter
#include <iostream>
using namespace std;
void cube()
{
    int num, res;
    cout << "enter  a num : ";
    cin >> num;
    res = num * num * num;
    cout << "cube of " << num << " = " << res << endl;
}
int main()
{
    cube();

    return 0;
}