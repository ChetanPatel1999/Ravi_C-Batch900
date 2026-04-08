// how to pass object as paramter
#include <iostream>
using namespace std;
class Number
{
    int num1;
    int num2;

public:
    void setNumber(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    void display()
    {
        cout << "num1 = " << num1 << endl;
        cout << "num2 = " << num2 << endl;
        cout << "------------------------" << endl;
    }
    void sumSameObjectDataMember()
    {
        int sum;
        sum = num1 + num2;
        cout << "sum = " << sum << endl;
        cout << "------------------------" << endl;
    }
    void sumDiffObjectDataMember(Number obj)
    {
        int sumnum1, sumnum2;
        sumnum1 = num1 + obj.num1;
        sumnum2 = num2 + obj.num2;
        cout << "sumnum1 = " << sumnum1 << endl;
        cout << "sumnum2 = " << sumnum2 << endl;
        cout << "------------------------" << endl;
    }
    static void StaticMethodSum(Number obj1, Number obj2)
    {
        int sumnum1, sumnum2;
        sumnum1 = obj1.num1 + obj2.num1;
        sumnum2 = obj1.num2 + obj2.num2;
        cout << "sumnum1 = " << sumnum1 << endl;
        cout << "sumnum2 = " << sumnum2 << endl;
        cout << "------------------------" << endl;
    }
};

int main()
{
    Number n1, n2;
    n1.setNumber(12, 5);
    n2.setNumber(10, 8);
    n1.display();
    n2.display();
    n1.sumSameObjectDataMember();
    n2.sumSameObjectDataMember();

    n1.sumDiffObjectDataMember(n2);

    Number::StaticMethodSum(n1, n2);

    return 0;
}