#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>


double const GRAN_RATIO = 1;
double const GRAM_RATIO = 0.068;
double const DRAHM_RATIO = 0.038378;


double consoleInput(double inputNum, char nameStr[])
{
	printf("Введіть %s: ", nameStr);
	scanf("%lf", &inputNum);
	return inputNum;
}


void table(double rowAmounth, double step, double startMeasure)
{
	printf("\n|-----------------------|-----------------------|-----------------------|");
	printf("\n|Гран\t\t\t|Грамм\t\t\t|Драхм\t\t\t|");
	printf("\n|-----------------------|-----------------------|-----------------------|");

	for (int i = 0; i < rowAmounth; i++)
	{
		printf_s("\n|%lf\t\t|%lf\t\t|%lf\t\t|", (startMeasure * GRAN_RATIO), (startMeasure * GRAM_RATIO), (startMeasure * DRAHM_RATIO));
		printf("\n|-----------------------|-----------------------|-----------------------|");
		startMeasure += step;
	}
}


/*
* measure - міра
* ratio - коеффіцієнт
*/
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	char measureValueStr[15] = "значення міри";
	double measureValue = 0;
	measureValue = consoleInput(measureValue, measureValueStr);

	
	char stepStr[6] = "крок";
	double step = 0;
	step = consoleInput(step, stepStr);


	char rowStr[18] = "кількість рядків";
	double row = 0;
	row = consoleInput(row, rowStr);


	table(row, step, measureValue);
}