#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <locale.h>
#include <Windows.h>
#include <Math.h>



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Введіть х: ");
	double x;
	scanf("%lf", &x);

	double y = 8.4 + (x + 2.4) * log10(x) - cos(x);

	printf("функція 8.4 + (%lf + 2.4) * log10(%lf) - cos(%lf) = %lf", x, x, x, y);

}