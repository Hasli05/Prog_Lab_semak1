#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>




int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    printf("intput 1 /:\n");
    double c1 = 0, t1 = 0;
    scanf("%lf/%lf", &c1, &t1);


    printf("intput 2 /:\n");
    double c2 = 0, t2 = 0;
    scanf("%lf/%lf", &c2, &t2);


    printf("intput 3 /:\n");
    double c3 = 0, t3 = 0;
    scanf("%lf/%lf", &c3, &t3);


    double sumPOfFirstCity = c1 * t1;
    printf("\nЦіна за розмови по тарифу першого міста: %.3lf", sumPOfFirstCity);

    double sumPOfSecondCity = c2 * t2;
    printf("\nЦіна за розмови по тарифу другого міста: %.3lf", sumPOfSecondCity);

    double sumPOfThirthCity = c3 * t3;
    printf("\nЦіна за розмови по тарифу третього міста: %.3lf", sumPOfThirthCity);


    double allP = sumPOfFirstCity + sumPOfSecondCity + sumPOfThirthCity;
    printf("\n%lf", allP);
}

