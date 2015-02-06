#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define M 3
#define N 3
int main()
{
    setlocale(LC_ALL, "Russian");

    int matrix[M][N];
    int i,j;
    for(i = 0; i < M; i++) {
        for(j = 0; j < N; j++) {
            printf("Введите вашу матрицу: \n");
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Ваша матрица: \n\n");

    for(i = 0; i < M; i++) {
        for(j = 0; j < N; j++) {
            printf("%d ",matrix[i][j]);
        }
        printf("\n\n");
    }

    int res1 = matrix[0][0];
    int res2 = matrix[0][1];
    int res3 = matrix[0][2];

    int res4 = res1 * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]);
    int res5 = res2 * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]);
    int res6 = res3 * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
    int result = res4 - res5 + res6;
    if(result == 0) printf("Матрица вырождена\n");
    else printf("Определитель матрицы = %d\n",result);

    return 0;
}
