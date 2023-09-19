//Write a function that prints "Namaste " if user is Indian & "Bonjour" if the user is French
#include<stdio.h>
void Namaste();
void Bonjour();
int main(){
    char ch ;
    printf("Enter f for french and i for indian :");
    scanf("%c",&ch);
    if(ch=='i'){
        Namaste();
    }
    else if(ch=='f'){
        Bonjour();
    }
    else{
        printf("I am a other country pertion");
    }
    return 0;
}
void Namaste(){
    printf(" Namaste,I am a indian .");
}
void Bonjour(){
    printf(" Bonjour, I am a French");
}
