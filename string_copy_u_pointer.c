//String copy using pointer
#include <stdio.h>
int main()
{
    char str1[100],str2[100],*ptr;
    int i=0,j=0;
    printf("Enter the string  :");
    scanf("%[^\n]",*str1);
    while (str1[i]!='\0')
    {
        str2[j]=str1[i];
        i++;
        j++;
    }
    str2[j]='\0';
    ptr=&str2;
    printf(" copid string   :%s\n",str2);
    printf("copid string  :%c\n",*ptr);
     return 0;
}