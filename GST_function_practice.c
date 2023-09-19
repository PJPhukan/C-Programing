//Write a function calculate a thing price with GST
#include<stdio.h>
float calculate(int n );
int main(){
     int n;
     float j;
    printf("Enter the original price of the things    :");
    scanf("%d",&n);
    j=calculate(n);
    printf("%f",j);
    return 0;

  }
float calculate(int n){
    float total;
    total=n+(n*0.18);
    return total;
}