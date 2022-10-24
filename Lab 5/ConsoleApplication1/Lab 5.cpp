#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>


void fillingArrFromConsole(int arr[], int arrMaxIndex)
{
	for (int i = 0; i < arrMaxIndex; ++i)
	{
		printf("Введіть елемент масиву з індексом %d: ", i);

		scanf("%d", &arr[i]);
	}
}


void printArr(int arr[], int arrMaxIndex)
{
	for (int i = 0; i < arrMaxIndex; ++i)
	{
		printf("%d  ", arr[i]);
	}
}


int sumInArr(int arr[], int arrMaxIndex)
{
	int sum = 0;
	for (int i = 0; i < arrMaxIndex; ++i)
	{
		sum += arr[i];
	}
	return sum;
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	int arr[10] = { 0 };

	fillingArrFromConsole(arr, 10);

	printArr(arr, 10);


	int sum = sumInArr(arr, 10);
	printf("\nСума чисел в масиві %d: ", sum);

	return 0;
}