//Without argument and without return value

#include<stdio.h>
void noargandre();//Funtion prototype
int main(){
   
    noargandre();//funtion call
    return 0;

}
void noargandre(){//funtion defination
   
    int n;
     printf("enter the value of n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("**\n");
    }
}
