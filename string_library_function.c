// 1.strcat  2.strcmp  3.strrev  4.strcpy  5.strlen    C library function <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str1[200], str2[200], s3[30];
    printf("Enter the first string ");
    gets(str1);
    printf("Enter the second string ");
    gets(str2);
     puts(strcat(str1, str2));//Use strcat function
    printf("The compare of str1 and str2 %d\n", strcmp(str1, str2)); // Use strcmp function
     puts(strrev(str1));//Use strrev function
     puts(strrev(str2));
    printf("%d \n", strlen(str1)); // use strlen function
    printf("%d \n", strlen(str2));
    strcpy(s3, str2);
    puts(s3);
    return 0;
}