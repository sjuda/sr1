#include <iostream>
#include <stdio.h>
// Задача 18 (Вариант 15)
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    int n;
    std::cout << "Enter value" << std::endl;
    std::cin >> n;
    if ((n <= 999) && (n >= 1))
    {
        int sum = a * 100 + b * 10 + c;
        int res;
        do
        {
            res = b * c + a;
        } while (res != n);
        std::cout << "Answer is " << res;
    }
    else
    {
        cout << "Error";
    }
    return 0;
}
