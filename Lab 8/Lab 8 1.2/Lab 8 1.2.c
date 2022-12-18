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
			printf("Введіть добуток %d компанії за %d місяць: ", (i + 1), (j+ 1));
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


void outDynamicArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d\t", arr[i]);
	}
}


void maxDamageInEnterprise(int *outArr, int **arr, int weight, int heigth)
{
	for (int i = 0; i < weight; i++)
	{
		outArr[i] = arr[i][0];
		for (int j = 0; j < heigth; j++)
		{
			if (outArr[i] > arr[i][j])
			{
				outArr[i] = arr[i][j];
			}
		}
	}
}


main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	int numOfEnterprise = inputNumOfEnterprise();
	const int workingMounth = 12;

	int* maxDamage = 0;
	maxDamage = malloc(sizeof(*maxDamage) * numOfEnterprise);
	
	int **allEnterprise = 0;
	allEnterprise = malloc(sizeof(*allEnterprise) * numOfEnterprise);

	initArray(workingMounth, numOfEnterprise, allEnterprise);

	fillingArray(allEnterprise, workingMounth, numOfEnterprise);
	outTwoDimensionalDynamiclArray(allEnterprise, workingMounth, numOfEnterprise);

	maxDamageInEnterprise(maxDamage, allEnterprise, numOfEnterprise, workingMounth);

	outDynamicArray(maxDamage, numOfEnterprise);
}


