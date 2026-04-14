#include <iostream>
using namespace std;
class Test
{
public:
    Test()
    {
        cout << "0 arg constructor" << endl;
    }
    Test(int a)
    {
        cout << "1 arg constructor" << endl;
    }
    Test(int a, int b)
    {
        cout << "2 arg constructor" << endl;
    }
    void display()
    {
        cout << " hello i am display" << endl;
    }
};
int main()
{
    Test t1(12,34);
    return 0;
}