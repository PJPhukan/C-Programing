//String practice 1st sit
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    //char string[]="hello world";
    //string[0]='i';//Modify string

    //another way to string declearation
    char string[]={'H','e','l','l','o',   ' ','W','o','r','l','d','\0'};
     printf("%s\n",string); 
    string[4]='p';
     //int a,b,n;
     printf("%s\n",string);     
     printf("%c\n",string[0]);//print one character 
     printf("%c\n",string[4]);
     printf("%c\n",string[3]);
     printf("%c\n",string[6]);
     //scanf();
    
return 0;
}