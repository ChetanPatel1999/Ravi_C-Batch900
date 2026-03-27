#include <iostream>
int main()
{
    int age;
    std::cin >> age; //( :: )---> scopresolution operator
    std::cout << "age : " << age << std::endl;

    int a, b, c;
    std::cout << "enter a : ";
    std::cin >> a;
    std::cout << "enter b : ";
    std::cin >> b;
    c = a + b;
    std::cout << "addition = " << c << std::endl;

    return 0;
}
