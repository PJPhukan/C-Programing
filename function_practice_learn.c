// Digits print in anumber       (same with funtion1.c)

//without argument and with return value

#include<stdio.h>
int digits_print();   //fution prototype
int main(){     //funtion call
    int a;
    a=digits_print();
    printf("Digits are %d",a);
    return 0;
}
int digits_print(){    //funtion cdefination
    int n,rem, m;
    printf("Enter the number :");
    scanf("%d",&n);
    m=n;
    while(n!=0){
        rem=m%10;
        return rem;
        m=m/10;
    }
}

