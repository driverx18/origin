#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    char name[100];
    int *pointer = malloc(20*sizeof(char));
    strcpy(name, "It's my life");

    if(pointer == NULL) printf("Error");

    else strcpy(pointer, "From Sarah with love");

    pointer = realloc(pointer, sizeof(char) * 100);

    strcat(pointer, "And i love someone..");

    printf("Name: %s\n", name);

    printf("Name with pointer: %s\n", pointer);

    free(pointer);

    return 0;
}
