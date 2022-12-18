#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>


#define SIZE_ARR 10


void fillingArr(int arr[], int sizeArr)
{
	for (int i = 0; i < sizeArr; i++)
	{
		printf("Введіть прибуток за %d рік: ", (i+1));
		int temp = 0;
		scanf("%d", &temp);

		arr[i] = temp;
	}
}


int main(void)
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int arr[SIZE_ARR] = { 0 };

	fillingArr(arr, SIZE_ARR);

	// рахунок в масивах починається з нуля, тому якщо ми хочемо отримати інформацію
	// з 3 та 6 комірки масиву потрібно вказати індекси 2 та 5 відповідно
	int profitOf3And6Years = arr[2] + arr[5];

	printf("Прибуток за 3 та 6 рік разом = %d", profitOf3And6Years);

	return 0;
}