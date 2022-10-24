#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <Windows.h>
#include <locale.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


    printf("Номер дня тижня: ");
    int dayOfWeek;
    scanf("%d", &dayOfWeek);


	switch (dayOfWeek)
	{
	case 1:
		printf("Понеділок (Monday)");
		break;
	case 2:
		printf("Вівторок (Tuesday)");
		break;
	case 3:
		printf("Середа (Wednesday)");
		break;
	case 4:
		printf("Четвер (Thursday)");
		break;
	case 5:
		printf("Пятниця (Friday)");
		break;
	case 6:
		printf("Субота (Saturday)");
		break;
	case 7:
		printf("Неділя (Sunday)");
		break;
	default:
		printf("Дня тижня з таким номером не існує!");
		break;
	}
}

