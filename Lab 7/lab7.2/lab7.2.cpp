#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>
#include <math.h>


int factorial(int x)
{
    int sum = 1;

    for (int i = 1; i <= x; i++)
    {
        sum *= i;
    }
    return sum;
}


double funcMultiply(int n, double x)
{
    double tempSum = 1;

    for (int i = 1; i <= n; i += 1);
    {
        tempSum *= (1 + sin(n * x) / factorial(n));
    }
    return tempSum;
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    printf("Введіть n: ");
    int n = 0;
    scanf("%d", &n);


    printf("Введіть x: ");
    double x = 0;
    scanf("%lf", &x);

    double y = funcMultiply(n, x);
    printf("Значення функції = %lf", y);
}

