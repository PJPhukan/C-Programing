//Without argument and with return value

#include<stdio.h>
int takenumber();//Funtion Prototype
int main(){
    int c;
    c=takenumber();//funtion calling
    printf("The input number is %d",c);
}
int takenumber(){ //funtion defination
    int i;
    printf("enter the number :");
    scanf("%d",&i);
    return i;
}