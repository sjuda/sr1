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
    int sum = 100;
    std::cout << "Enter value" << std::endl;
    std::cin >> n;
    if ((n <= 999) && (n >= 1))
    {
        for (a = 0; sum > 99; a++)
        {
            sum -= 100;
        }
        for (b = 0; sum > 9; b++)
        {
            sum -= 10;
        }
        for (c = 0; sum > 0; a++)
        {
            sum -= 1;
        }
        int res;
        do
        {
            res = b * c + a;
            sum++;
        } while (res != n);
        std::cout << "Answer is " << res;
    }
    else
    {
        cout << "Error";
    }
    return 0;
}
