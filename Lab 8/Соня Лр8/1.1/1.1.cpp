#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>


int input(char letter)
{
    printf("\nВведіть число %c : ", letter);
    int num;
    scanf("%d", &num);

    return num;
}


void sum(int* a, int* b, int* c)
{
    int temp = (* a) * (*b) * (*c);

    *b = temp;
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a = input('a');
    int b = input('b');
    int c = input('c');

    sum(&a, &b, &c);

    printf("b = %d", b);
}

