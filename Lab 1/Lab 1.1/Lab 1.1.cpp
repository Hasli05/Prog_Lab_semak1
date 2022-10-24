#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <iostream>
#include <locale.h>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	printf("Вага/ціна мяса:");
	double  meatW, meatP;
	scanf("%lf/%lf", &meatW, &meatP);


	printf("Вага/ціна першої риби: ");
	double firstFishW, firstFishP;
	scanf("%lf/%lf", &firstFishW, &firstFishP);


	printf("Вага/ціна другої риби: ");
	double secondFishW, secondFishP;
	scanf("%lf/%lf", &secondFishW, &secondFishP);

	const int BASIC_DAILY_EXPENSES = 500;

	double allMeatP = meatW * meatP;
	double allFirstFishP = firstFishW * firstFishP;
	double allSecondFishP = secondFishW * secondFishP;


	double dailyExpenses = BASIC_DAILY_EXPENSES + allMeatP + allFirstFishP + allSecondFishP;


	printf("Кожноденні витрати ресторану.");
	printf("\nЦіна мяса: %20.3lf", allMeatP);
	printf("\nЦіна першої риби: %13.3lf", allFirstFishP);
	printf("\nЦіна другої риби: %13.3lf", allSecondFishP);
	printf("\nІнші трати: %16d", BASIC_DAILY_EXPENSES);
	printf("\nЗагальні витрати: %14.3lf", dailyExpenses);


	printf("\nK");
}


