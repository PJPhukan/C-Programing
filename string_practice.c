// string practice

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void stringFirst(char str[])
{
     int i = 0;
     while (str[i] != '\0')
     {
          printf("%c", str[i]);
          i++;
     }
     printf("\n");
}
int main()
{
     char string[100];
     gets(string);
     printf("Using function :");
     stringFirst(string);
     printf("Using puts :");
     puts(string);
     printf("Using printf %s", string);
     return 0;
}