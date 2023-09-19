//Count the number of vowels in a string

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main()
{
     int i=0,a=0;
     char str[100],ch;
     printf("Enter the string :");
     scanf("%[^\n]",str);
    while ((ch=str[i])!='\0')
    {
       switch (ch)
       {
       case 'a': case 'e': case 'i': case 'o':case 'u':case 'A':case 'E':case 'I':case 'O':case 'U':
       a++;
        break;
       
       default:
        break;
       }
       i++;
    }
    printf("Total vowel :%d",a);
return 0;
}