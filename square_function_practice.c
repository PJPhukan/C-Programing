//Write a functions to calculate the square of a number given by user
#include<stdio.h>
#include<math.h>
int calculate(int n);
int main(){
    int n,j;
    printf("Enter the number");
    scanf("%d",&n);
    j=calculate(n);
    printf(" power of the number   :%d",j);
    return 0;
}
int calculate(int n){
     int power;
      power= pow(n,2);
     return power;
}