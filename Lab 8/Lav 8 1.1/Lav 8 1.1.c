#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>


int consoleInput(char letter)
{
    printf("\nВведіть число %c : ", letter);
    int num;
    scanf("%d", &num);

    return num;
}


void sumOfTwo(int *a, int *b) 
{
    *b = (*a) * (*b);
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    
    int a = consoleInput('a');
    int b = consoleInput('b');

    sumOfTwo(&a, &b);

    printf("%d", b);
}


