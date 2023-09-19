/// Matrix multiplication
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   long int a[2][4], b[4][2], c[2][2], i = 0, j = 0, k = 0, sum = 0;
    printf("Enter the first matrix :\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Value of matrix %d %d   :", i, j);
            scanf("%d", &a[i][j]);
        }
        // printf("\n");
    }
    printf("Enter the second matrix :\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Value of matrix  %d %d   :", i, j);
            scanf("%d", &b[i][j]);
        }
        // printf("\n");
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                sum = a[i][k] * b[k][j];
            }
            c[i][j] = sum;
            sum = 0;

        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", c[i][j]);
        }
      printf("\n");
    }

    return 0;
}