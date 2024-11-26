
#include <iostream>
#include "Windows.h"

using namespace std;


int sum(int a, int b)
{
    return a + b;
}


int main()
{
    SetConsoleCP(125);
    SetConsoleOutputCP(1251);

    cout << "Привіт, Вадим!" <<endl;

    cout << "Hello, Lab7" << endl;

    cout << sum(3, 5) << endl;

    system("pause");
}