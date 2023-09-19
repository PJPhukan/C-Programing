#include <stdio.h>

int main()
{
    int a = 10;
    float b = 3.14;
    char ch = 'p';
    void *ptr;
    ptr = &a;
    printf(" The value of a is %d\n", *((int *)ptr));
    ptr = &b;
    printf(" The value of a is %f\n", *((float *)ptr));
    ptr = &ch;
    printf(" The value of a is %c\n", *((char *)ptr));

    return 0;
}