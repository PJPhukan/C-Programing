//print a number as a word
#include<stdio.h>
int main(){
    int n,num;
    num=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0){
        num=num(num*10)+(n%10);
        n=n/10;
    }
    while(num!=0){
        switch (num%10)
        {
        case 0:
        printf("Zero");
            break;
             case 1:
        printf("One");
            break;
             case 2:
        printf("Two");
            break;
             case 3:
        printf("Three");
            break;
             case 4:
        printf("Four");
            break;
             case 5:
        printf("Five");
            break;
             case 6:
        printf("Six");
            break;
             case 7:
        printf("Seven");
            break;
             case 8:
        printf("Eight");
            break;
             case 9:
        printf("Nine");
            break;
        }
        num=num/10;
       
        }
        return 0;
    }