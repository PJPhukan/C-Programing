//Write a function to sum of two digits
#include<stdio.h>
int sum(int x , int y )
{
    return x+y;
}
int main(){
    int s;
    int a,b;
    printf("Enter the numbers  :");
    scanf("%d %d",&a,&b);
    s=sum(a,b);
    printf("sum of two digit :%d",s);
    return 0;
}