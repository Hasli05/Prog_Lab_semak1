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
			printf("Введіть добуток %d компанії за %d місяць: ", (i + 1), (j + 1));
			scanf("%d", &array[i][j]);
		}
		printf("\n");
	}
}


void outTwoDimensionalDynamiclArray(int** array, int heigth, int weigth)
{
	for (int i = 0; i < weigth; i++)
	{
		for (int j = 0; j < heigth; j++)
		{
			printf("%d\t", array[i][j]);

		}
		printf("\n");
	}
}


void outProfit(int** array, int heigth, int weigth)
{
	for (int i = 0; i < weigth; i++)
	{
		for (int j = 0; j < heigth; j++)
		{
			if (array[i][j] > 0)
			{
				printf("Прибуток за %d місяць %d компанії = %d\t", (j + 1), (i + 1), array[i][j]);
			}

		}
		printf("\n");
	}
}

main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int numOfEnterprise = inputNumOfEnterprise();
	int numOfYears = inputYears();


	int** arr = 0;
	arr = malloc(sizeof(*arr) * numOfEnterprise);

	initArray(numOfYears, numOfEnterprise, arr);

	fillingArray(arr, numOfYears, numOfEnterprise);

	outProfit(arr, numOfYears, numOfEnterprise);
}