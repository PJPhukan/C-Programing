//Find nPr and nCr using function
#include<stdio.h>
unsigned int factorial(unsigned int n);
unsigned int nPr(unsigned int n,unsigned int r);
unsigned int nCr(unsigned int n, unsigned int r);
int main(){
    int n,r;
    scanf("%d  %d",&n ,&r);
    printf("Factorial of n %d\n",factorial(n));
    printf("Factorial of r %d\n",factorial(r));
    printf("%dP%d  :%d",n,r,nPr(n,r));
    printf("%dC%d  :%d",n,r,nCr(n,r));
    return 0;
}
unsigned int factorial(unsigned int n){
    int res=1,i;
    if(n==0){
        return 1;
    }
    else{
        for(i=1;i<n;++i){
            res=res*i;
            return res;
        }
    }
}
unsigned int nPr(unsigned int n,unsigned int r ){
    return (factorial(n)/factorial(n-r));
} 
unsigned int nCr(unsigned int n, unsigned int r){
    return (factorial(n)/(factorial(r)*factorial(n-r)));
}