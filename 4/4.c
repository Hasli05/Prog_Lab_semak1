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


void sumOfDamage(int** arr, int* outArr, int heigth, int weigth)
{
	for (int i = 0; i < weigth; i++)
	{
		int temp = 0;
		for (int j = 0; j < heigth; j++)
		{
			
			if ((arr[i][j] <= -30) && (arr[i][j] >= -100))
			{
				temp += arr[i][j];
			}
		}
		outArr[i] = temp;
	}
}


void outDynamicArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("Сума збитків %d компанії які більші за -30 але менші за -100 = %d\n",(i + 1), arr[i]);
	}
}



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int yearsForAnalys = inputYears();
	int numOfEnterprise = inputNumOfEnterprise();

	int** allEnterpriseStatistic = 0;
	allEnterpriseStatistic = malloc(sizeof(*allEnterpriseStatistic) * numOfEnterprise);

	int* damageArr = 0;
	damageArr = malloc(sizeof(*damageArr) * numOfEnterprise);

	initArray(yearsForAnalys, numOfEnterprise, allEnterpriseStatistic);
	fillingArray(allEnterpriseStatistic, yearsForAnalys, numOfEnterprise);

	sumOfDamage(allEnterpriseStatistic, damageArr, yearsForAnalys, numOfEnterprise);

	outDynamicArray(damageArr, numOfEnterprise);
}


