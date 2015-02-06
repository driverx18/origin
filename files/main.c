#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *file = fopen("d://readme.txt", "w");

    if(file == NULL) printf("Error");

    fprintf(file,"Hello!");


    fclose(file);



    return 0;
}
