//Write a program to convert a string form upper case to lower case and viceersa
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    int i=0;
    char str[100];
    printf("Enter the string  :");
    scanf("%[^\n]", str);
    while (str[i] != '\0'){
        if (isupper(str[i])){
            str[i]=tolower(str[i]);
        }
        else{ 
            str[i] = toupper(str[i]);
        }
        i++;
    }
    printf(" Case cinvert string  : %s",str);
    return 0;
}