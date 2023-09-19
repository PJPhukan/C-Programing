//Sum of first n natural number using recurtion
#include<stdio.h>
int SUM(int n){
    if(n==1){
        return 1;
    }
    int sum1=SUM(n-1);
    int sum=sum1+n;
    return sum;
}
int main(){
    int n;
    printf("Enter the how many number sum you want :");
    scanf("%d",&n);
   // SUM(n);
   printf("sum of %d numbers %d",n,SUM(n));
    return 0;
}