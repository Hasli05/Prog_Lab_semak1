#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>


int input(char letter)
{
    printf("Введіть число %c : ", letter);
    int num;
    scanf("%d", &num);

    return num;
}


void multiply1And2Into3(int *a, int *b, int *c)
{
    int temp = (*a) * (*b);
    
    *c = temp;
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


    int a = input('a');
    int b = input('b');
    int c = input('c');

    printf("c = %d\n", c);

    multiply1And2Into3(&a, &b, &c);

    printf("Після відпрацювання функції c = %d", c);
}


