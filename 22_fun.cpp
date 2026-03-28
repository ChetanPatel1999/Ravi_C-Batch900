#include <iostream>
using namespace std;

void printIntro()
{
    cout << "hello my name is chetan" << endl;
    cout << "i am a teacher" << endl;
    cout << "-----------------------------" << endl;
}

int main()
{

    int i;
    for (i = 1; i <= 5; i++)//2
    {
        printIntro();
    }

    return 0;
}