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



	double n = inpitNum('n');
	double x = inpitNum('x');
	double sumOfFunction = 0;

	for (int i = 1; i <= n; i++)
		sumOfFunction += 1 / fuctorial(i) + sqrtf(fabs(x));	


	printf("%lf", sumOfFunction);
}


