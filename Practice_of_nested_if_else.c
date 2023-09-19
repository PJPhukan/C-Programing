//Write a program  to find the biggest of given three numbers using a nestd if statement 

#include<stdio.h>
int main(){
    int a,b,c,big;
    printf("Enter the three numbers:");
    scanf("%d %d %d",&a ,&b,&c);
    if(a>b){
        if(a>c){
            big=a;
        }
        else{
            big=c;
        }
    }
    else{
        if(b>c){
            big=b;
        }
        else{
            big=c;
        }
    }
    printf("The biggest number is:%d",big);
    return 0;
}