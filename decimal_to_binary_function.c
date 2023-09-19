//decimal to binary convert a number

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int binary(int );
int main()
{
     int n;
      printf("Enter the number :");
     scanf("%d",&n);
     binary(n);
return 0;
}
int binary(int n){
     int binaryNum[100],i=0;
    if(n==0){
     printf("0");
    }
     while (n>0)
     {
          binaryNum[i++]=n%2;
          n/=2;
     }
     for(int j=i-1;j>=0;j--){
          printf("%d",binaryNum[j]);
     }    
}
