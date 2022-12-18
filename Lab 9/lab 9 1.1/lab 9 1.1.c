#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    printf("Введіть Фамілію, імя і по батькові:\n");
    char lfp[40]; //last name first name patronymic
    gets_s(lfp, 40);


    for (int i = 0; lfp[i] != ' '; i++)
    {
        if (lfp[i] == 'а' || lfp[i] == 'о')
            for (int j = i; lfp[j] != '\0'; j++)
            {
                lfp[j] = lfp[j + 1]; //стрічка здвигається вліво
                i--;
            }
    }

    printf("Фалімія без букв а та о\n");
    printf_s(lfp, 40);
}


