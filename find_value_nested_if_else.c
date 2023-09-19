//Write a program to find the value of y Using nested if else

#include<stdio.h>
#include<math.h>
int main(){
    int n;
    float y, x;
    printf("enter the value of x and n");
    scanf("%f %d",&x, &n);
    if(n==1){
        y = 1+x;
    }
    else{
        if(n==2){
            y = 1+x/n;
        }
        else{
            if(n==3){
                y=1+pow(x,n);
            }
            else{
                y=1+n*x;
            }
        }
    }
    printf("The value of y:%f",y);
    return 0;
}