#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define N 7
int main()
{
    setlocale(LC_ALL, "Russian");
    int array[N];
    int i;
    for(i = 0; i < N; i++) {
        printf("¬ведите %d число в массив: ", i+1);
        scanf("%d",&array[i]);
    }

    for(i = 0; i < N; i++) {
        printf("%d. ¬аш массив: %d\n",i+1, array[i]);
    }
    int min, max;
    int max_pos, min_pos;
    min = max = 0;
    min = 9999;
    for(i = 0; i < N; i++) {

        if(array[i] > max) {
                max = array[i];
                max_pos = i+1;
        }
        else if(array[i] < min) {
            min = array[i];
            min_pos = i+1;
        }
    }

    for(i = 0; i < N; i++) {
    int temp;

        if(array[i] > array[i+1]) {
                array[i] = temp;
                i+1 = i;
                temp = array[i];
        }
    }
    for(i= 0;i<N; i++) {
        printf("%d, ",array[i]);
    }



    return 0;
}
