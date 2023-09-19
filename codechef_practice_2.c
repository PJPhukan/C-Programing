//If Give an integer N.Write a program to obtain the sum of the first and last digits of this number
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main()
{
     int a,b,n;
     printf("Enter the number :");
     scanf("%d",&n);
     a=n%10;
     n=n/10;
     while (n>0)
     {
        b=n%10;
        n=n/10;
     }
     int sum=0;
     sum=a+b;
    printf("Sum of the 1st and last digits of the number = %d",sum); 
return 0;
}