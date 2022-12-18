#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>
#include <malloc.h>


int inputNumOfEnterprise()
{
	printf("Введіть кількість підприємств: ");
	int numOfEnterprise = 0;
	scanf("%d", &numOfEnterprise);

	return numOfEnterprise;
}


int inputYears()
{
	printf("Введіть кількість років для аналізу: ");
	int temp = 0;
	scanf("%d", &temp);

	return temp;
}


void initArray(int heigth, int weigth, int** array)
{
	for (int i = 0; i < weigth; i++)
	{
		array[i] = malloc(sizeof(**array) * heigth);
	}
}


void fillingArray(int** array, int heigth, int weigth)
{
	for (int i = 0; i < weigth; i++)
	{
		for (int j = 0; j < heigth; j++)
		{
			printf("Введіть добуток %d компанії за %d рік: ", (i + 1), (j + 1));
			scanf("%d", &array[i][j]);
		}
		printf("\n");
	}
}


void outStatictic(int** arr, int heigth, int weigth)
{
	for (int i = 0; i < weigth; ++i)
	{
		for (int j = 1; j <= 2; ++j)
		{
			printf("\nСтатистика компаніх номер %d за %d рік: %d", (i + 1), (j + 1), arr[i][j]);
		}
	}
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	int numOfEnterprise = inputNumOfEnterprise();
	int workYears = inputYears();

	int** mainArr = 0;
	mainArr = malloc(sizeof(*mainArr) * numOfEnterprise);

	initArray(workYears, numOfEnterprise, mainArr);

	fillingArray(mainArr, workYears, numOfEnterprise);

	outStatictic(mainArr, workYears, numOfEnterprise);
}

