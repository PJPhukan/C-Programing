//Sum of two number using  funtion
#include<stdio.h>
int sum(int a ,int b);
int main(){
    int x,y,s;
    printf("Enter the first number:");
    scanf("%d",&x);
    printf("Enter the second number:");
    scanf("%d",&y);
    s=sum(x,y);
    printf("Sum is %d",s);
    return 0;

}
int sum(int a ,int b){
    return a+b;
}