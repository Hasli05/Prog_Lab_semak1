#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>
#include <time.h>

#define m 5
#define n 5


void randomFillingArr(int arr[][n], int spreatInRandom)
{
    // spreatInRandom - область рандомайзера, повинно бути >= розміру масива

    int inArray = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = rand() % spreatInRandom;
        }
    }
}


void printArr(int arr[][n])
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
}



void moreK(int arr[][n], int k)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] > k)
            {
                printf("Елемент з індексами %d , %d більший ніж К і = %d \n", i, j, arr[i][j]);
            }
        }
    }
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    srand(time(NULL));
	int arr[m][n] = {0};
   
    randomFillingArr(arr, 100);
    printArr(arr);


	printf("Введіть число k ( k < 100): ");
	int k = 0;
	scanf("%d", &k);


    moreK(arr, k);
   
}
