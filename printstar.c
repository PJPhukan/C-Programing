#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
// using function
/*
 *
 **
 ***
 ****
 */
void printstar(int x)
{
    int i, j;
    for (i = 0; i < x; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void reversePrintstar(int x)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j <= x - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int i, j, n, ch;
    printf("Enter 1 for star pettern and 0 for reverse star pattern ");
    scanf("%d", &ch);
    printf("Enter the number :");
    scanf("%d", &n);
    // Withpout function
    /*for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= n - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }*/
    if (ch == 1)
    {
        printstar(n);
        /* code */
    }
    else
    {
        if(ch==0){
        reversePrintstar(n);}
        else{
            printf("invalid tye");
        }
    }

    printf("\n");

    return 0;
}