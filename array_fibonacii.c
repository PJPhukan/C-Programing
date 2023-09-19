//Print fibonacci series 

#include<stdio.h>
int main(){
    int a[100],n,i;
    printf("how many terms :");
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(i=2;i<n;i++){
        a[i]=a[i-1]+a[i-2];
    }
    
    for(i=0;i<n;i++){
        printf(" fibonacii number is %d\n",a[i]);
    }
    return 0;
}