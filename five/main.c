#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char temp[100];

    printf("������� ������: ");

    gets(temp);

    printf("�� �����: \"%s\"\n", temp);

    return 0;
}

