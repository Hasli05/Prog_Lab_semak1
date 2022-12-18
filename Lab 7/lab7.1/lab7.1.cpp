#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>
#include <math.h>


double firstCoundition(double x)
{
    return pow(x, 3) - 7 * x;
}


double secondCoundition(double x)
{
    return fabs(sqrt(x + 4));
}


void researchFunc(double minX, double maxX, double step)
{
    for (double i = minX; i <= maxX; i += step)
    {
        double y = 0;

        if (i > 4)
        {
           y = firstCoundition(i);
        }
        else if ((i < 4) and (i != 0))
        {
           y = secondCoundition(i);
        }
        else if (i == 0)
        {
            y = 3;
        }
        printf("\n%lf", y);

        y = 0;
    }
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    printf("Введіть мінімальне значення х: ");
    double x1 = 0;
    scanf("%lf", &x1);

    printf("Введіть максимальне значення х: ");
    double x2 = 0;
    scanf("%lf", &x2);

    printf("Введіть крок: ");
    double h = 0;
    scanf("%lf", &h);


    researchFunc(x1, x2, h);
}

