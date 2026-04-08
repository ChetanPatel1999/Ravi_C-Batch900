#include <iostream>
using namespace std;
class display
{
public:
    void disp(int data)
    {
        cout << "data : " << data << endl;
    }
    void disp(double data)
    {
        cout << "data : " << data << endl;
    }
    void disp(char data)
    {
        cout << "data : " << data << endl;
    }
    void disp(string data)
    {
        cout << "data : " << data << endl;
    }
};
int main()
{
    display obj1;
    obj1.disp(45);
    obj1.disp(8.9);
    obj1.disp('A');
    obj1.disp("hello ravi");
    return 0;
}