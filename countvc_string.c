//Vowel and consonant count in a string
#include<stdio.h>
#include<string.h>

int main()
{
    int i, len, vowel, consonant;
    char str[100];

    scanf("%[^\n]", str);
    
    vowel = 0;
    consonant = 0;
    len = strlen(str);

    for(i=0; i<len; i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            switch (str[i])
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                vowel++;
                break;
            default:
                consonant++;
            }
        }
    }
    printf("Total no of vowel = %d\n", vowel);
    printf("Total no of consonat = %d\n", consonant);
    return 0;
}