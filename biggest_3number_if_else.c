//Write a program to find the biggest of given three numbers

#include<stdio.h>
int main(){
    int a,b,c ,big;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a, &b, &c);
    big=a;
    if(big<b){
        big=b;
        }
    if(big<c){
        big=c;
    }
    printf("The biggest number of three numbers:%d",big);
    return 0;
}