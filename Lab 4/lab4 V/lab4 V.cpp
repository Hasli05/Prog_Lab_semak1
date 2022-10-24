#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>
#include <math.h>


double fuctorial(double num)
{
	double tempNum = num;

	for (int i = 1; i < num; i++)
	{
		tempNum *= i;
	}

	return tempNum;
}


double pow1(double num, double pow)
{
	double tempNum = num;

	for (int i = 1; i < pow; i++)
	{
		tempNum *= num;
	}
	return tempNum;
}



double inpitNum(char nameNum)
{

	printf("Введіть натуральне число %c: ", nameNum);
	double temp;
	scanf("%lf", &temp);

	return temp;
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	double a = inpitNum('a');
	double n = inpitNum('n');

	double s;

	int counter = int(n);

	for (int i = 0; i < counter; ++i)
	{
		s = a - pow1(-1, (n - 1)) * (pow1(a, (2 * n - 1)) / (fuctorial(2 * n - 1)));
		printf("\n%lf", s);
		n += 2;
	}
}
