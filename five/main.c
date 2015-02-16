#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h> // russian library
int main()
{
    SetConsoleCP(1251); // for russian
    SetConsoleOutputCP(1251); // // for russian
    char temp[100];
    char password[] = "игорь";
    int test = 0;
    while(!test) {
       printf("Введите строку: ");
        gets(temp);
        printf("Вы ввели: \"%s\"\n", temp);
    if(strcmp(temp,password) == 0)
    {
        test = 1;
        printf("Пароль принят.\n\n");
    }
    else printf("Пароль не принят.\n\n");
    }


    return 0;
}

