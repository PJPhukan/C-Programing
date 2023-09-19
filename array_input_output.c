//Array input and output

#include<stdio.h>
int main(){
   int x[100],i,n,sum=0;
   printf("how many integers:");
   scanf("%d",&n);
   //loop to read n integers;
   for(i=0;i>n;i++){
        printf("enter the %dth term",i+1);
        scanf("%d",&x[i]);
   }
   for(i=0;i<n;i++){
        sum=sum+x[i];
        }
   printf("Sum of all integers:",sum);
    return 0;
}