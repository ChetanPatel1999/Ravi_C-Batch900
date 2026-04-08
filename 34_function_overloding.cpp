#include <iostream>
using namespace std;
void add(int a, int b)
{
    printf("addition : %d\n", (a + b));
}
void add(int a, int b, int c)
{
    printf("addition : %d\n", (a + b + c));
}
void add(int a)
{
    printf("addition : %d\n", (a + 50));
}
void add(double a, int b)
{
    printf("addition : %.2f\n", (a + b));
}
void add(int a, double b)
{
    printf("addition : %.2f\n", (a + b));
}
int main()
{
    add(6.7, 9);
    add(6, 9.4);
    add(3);
    add(12, 9);
    add(45, 6, 2);
    add(4, 8);
    return 0;
}