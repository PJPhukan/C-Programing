// Call by value function and call by reference
//Swap two number using call by reference
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
void swap(int *, int *);
int main()
{
    int a, b, n;
    printf("Enter the 1st and 2nd number :");
    scanf("%d %d", &a, &b);
    printf("a=%d b=%d\n", a, b);
    printf("After swap :\n");
    swap(&a, &b);

    return 0;
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("a=%d  b=%d", *x, *y);
}