#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h> // russian library
int main()
{
    SetConsoleCP(1251); // for russian
    SetConsoleOutputCP(1251); // // for russian
    char temp[100];
    char password[] = "�����";
    int test = 0;
    while(!test) {
       printf("������� ������: ");
        gets(temp);
        printf("�� �����: \"%s\"\n", temp);
    if(strcmp(temp,password) == 0)
    {
        test = 1;
        printf("������ ������.\n\n");
    }
    else printf("������ �� ������.\n\n");
    }


    return 0;
}

