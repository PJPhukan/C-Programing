// Write a program to find the biggest of given two numbers.
#include<stdio.h>
int main(){
    int a,b,big;
    printf("enter the two numbers :");
    scanf("%d %d",&a ,&b);
    // big=a;
    if(b>a){
    //if(b>big)
       printf("bigest number is %d",b);
        //big=b;
    }
    else{
    printf("Biggest number is %d",a);
    }
     //printf("Biggest number is %d",big);
    return 0;
}