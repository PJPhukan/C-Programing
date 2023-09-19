#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int *ptr, n;
    printf(" enter n");
    scanf(" %d", &n);
    // ptr=(int*)malloc(n*sizeof(int));
    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    free(ptr);
    printf(" enter n");
    scanf(" %d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", ptr[i]);
    }
    free(ptr);
    return 0;
}