///Funtion learn by Code with harry

//With arguments and with return value

#include<stdio.h>

int sum(int a, int b);//Funtion Prototype

int main(){    // Funtion calling
    int a, b, c;
    printf("Enter the number a and b");
    scanf("%d %d",&a,&b);

    c = sum(a,b);
    printf("sum of a and b :%d",c);
    return 0;
}
int sum(int a,int b){    //Funtion defination
    return a+b;
}