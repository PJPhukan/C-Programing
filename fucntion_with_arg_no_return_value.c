//With argument without return value

#include<stdio.h>
void printstar(int n);//Funtion Prototype
int main(){
    printstar(7);//funtion  calling
}
void printstar(int n){ ///Funtion defination
    for(int i=0;i<n;i++){
        printf("%c",'*');
    }
}