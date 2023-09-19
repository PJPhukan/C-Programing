//pointer practice

#include <stdio.h>
int main()
{
    int a, *ptr;
    a = 5;
    ptr = &a;
    printf("Enter the number  :%d\n", a);    // print a=5
    printf("Enter the number  :%d\n", &a);   // address of a
    printf("Enter the number  :%d\n", ptr);  // print address of a
    printf("Enter the number  :%d\n", *ptr); // print 5
    printf("Enter the number  :%d\n", &ptr); // print address of ptr

    // scanf("%d",&n);
    return 0;
}