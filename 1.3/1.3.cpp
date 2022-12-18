#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    for (int i = 10; i <= 20; i++)
    {
        int square = i * i;
        printf("Квадрат числа %d = %d\n", i, square);
    }
}


