//Find the factorial using function
#include<stdio.h>
int Factorial(int n){
    if(n==0||n==1){
        return 1;
    }
    int fact=Factorial(n-1);
    int Fact=fact*n;
    return Fact;
}
int main(){
    int n;
    printf("Enter the number  :");
    scanf("%d",&n);
    printf(" factorial of %d is %d",n,Factorial(n));
    return 0;
}