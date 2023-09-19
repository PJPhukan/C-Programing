//31.Write a program to concanate two strings using function(without libary function)
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
char Concanate(char [],char[]);
int main()
{
     char str1[100],str2[100];
     Concanate(str1,str2);
     printf("Concanate string   %s",str1);
return 0;
}
char Concanate(char str1[], char str2[]){
    int i=0,count=0,j=0;
    printf("Enter the first string :");
    scanf("%s",str1);
    printf("Enter the second string :");
    scanf("%s",str2);
     while(str1[i]!='\0'){
         i++;
    }
    for(int j=0;str2[j]!='\0';j++){
        str1[i]=str2[j];
        i++;
    }
    str1[i]='\0';
}