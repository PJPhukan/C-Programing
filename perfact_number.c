//Write a function to check perfact number or not
#include<stdio.h>
int main(){
    int n,rem,s=0;
    printf("Enter the numer :");
    scanf("%d",&n);
    for(int i=1                                                                                                                                                                                                                                                                                                                                                                                          ;i<n;i++){
        rem=n%i;
        if(rem==0){
            s=s+i;
        }
    }
    if(s==n){
        printf("The number is a perfact number ");
    }
    else{
        printf("The number is not a perfact number");
    }
}