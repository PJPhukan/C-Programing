//find the fibonacii number
#include<stdio.h>
void Fibonaci(int ); 
int main(){
    int n;
    printf("how many terms :");
    scanf("%d",&n);
    Fibonaci(n);
    return 0;
}
void Fibonaci(int n){   
    int a[100],i;
    a[0]=0;
    a[1]=1;
    for(i=2;i<n;i++){
        a[i]=a[i-1]+a[i-2];
    }
    for(i=0;i<n;i++){
        printf(" fibonacii number is %d\n",a[i]);
    }
}