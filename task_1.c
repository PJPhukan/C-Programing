//if user type deka then print he is a hacker and das then print he is a gamer
#include<stdio.h>
#include<string.h>
int main(){
    char ch[10];
    printf("Enter the title of Ridip ");
    scanf("%s",ch);
    if(strcmp(ch,"deka")==0){
        printf("He is a Hacker");
    }
    else if(strcmp(ch,"das")==0){
        printf("He is a Gamer ");
    }
    else{
        printf("He is a other profession boy");
    }
    return 0;
}