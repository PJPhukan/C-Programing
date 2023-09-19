//Digits print in a number

#include<stdio.h>
//Funtion Declearation or Prototype
void to_digits(int n);
int main(){
    int n,rem;
    printf("Enter the numbers:");

    scanf("%d",&n);
    to_digits(n);
    return 0;
     
     
}
void to_digits( int n){
    int rem;
    while(n!=0){
         rem=n%10;
            // return rem;
        printf("%d",rem);
        n=n/10;
     }
   
    
}