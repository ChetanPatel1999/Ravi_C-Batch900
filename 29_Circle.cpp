#include <iostream>
using namespace std;
class Circle
{
    float radius;
    float area;
    float circumference;

public:
    void setRadius(float r)
    {
        radius = r;
    }
    void computeOperation()
    {
        area = 3.141 * radius * radius;
        circumference = 2 * 3.141 * radius;
    }
    void getCircle()
    {
        cout << "circle info : " << endl;
        cout << "circle radius : " << radius << endl;
        cout << "circle area : " << area << endl;
        cout << "circle circumference : " << circumference << endl;
        cout << "-------------------------------------------------" << endl;
    }
};
int main()
{
    Circle c1, c2;
    c1.setRadius(5.3);
    c1.computeOperation();
    c1.getCircle();
    
    c2.setRadius(4);
    c2.computeOperation();
    c2.getCircle();
    return 0;
}