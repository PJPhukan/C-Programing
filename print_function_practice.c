//Write a funtion to print hello world ,how many time input form user
#include<stdio.h>
int printhllo(int n){
    if(n==0){
        return 0;
    }
    printf("Hello World\n");
    printhllo(n-1);
}
int main(){
    int x;
    printf("Enter how many times");
    scanf("%d",&x);
    printhllo(x);
    return 0;
}