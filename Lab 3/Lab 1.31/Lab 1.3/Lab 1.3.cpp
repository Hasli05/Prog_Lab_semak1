#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <Windows.h>
#include <locale.h>
#include <math.h> 


double perimetr(double firstSide, double secondSide)
{
	return firstSide * secondSide;
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Введіть сторони першого прямокутника в форматі а/б: ");
	double a1, b1;
	scanf("%lf/%lf", &a1, &b1);

	printf("Введіть сторони другого прямокутника в форматі а/б: ");
	double a2, b2;
	scanf("%lf/%lf", &a2, &b2);

	printf("Введіть сторони третього прямокутника в форматі а/б: ");
	double a3, b3;
	scanf("%lf/%lf", &a3, &b3);

	double firstRectP = perimetr(a1, b1);
	double secondRectP = perimetr(a2, b2);
	double thirthRectP = perimetr(a3, b3);

	if (firstRectP > secondRectP and firstRectP > thirthRectP)
	{
		printf("Площя першого прямокутника найбільна і рівна %lf", firstRectP);
	}
	else if (secondRectP > thirthRectP) {
		printf("Площя другого прямокутника найбільна і рівна %lf", secondRectP);
	}
	else {
		printf("Площя третього прямокутника найбільна і рівна %lf", thirthRectP);
	}
}

