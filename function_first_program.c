//Write two function one to print "hello" &second to print "good bye".

#include<stdio.h>
void hello();
void goodbye();
int main(){
    hello();
    goodbye();
    return 0;
}
void hello(){
    printf("Hello ,How are you\n");
}
void goodbye(){
    printf("Good bye friend");
}