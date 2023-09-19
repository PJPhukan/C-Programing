//count vowel in a string
#include<stdio.h>
int main(){
    int i, ch,counts=0;
    char str[100];
    scanf("%[^\n]",str);
    while((ch= str[i]) != '\0'){
        switch (ch)
        {
        case 'a': case 'e':case 'i':case 'o':case 'u':case 'A':case 'E':case 'I':case 'O':case 'U':
            counts ++;
            break;
        
        default:
            break;
        }
        i++;
    }
    for(i=0;i<100;i++){
        printf(" %d\n",counts);
    }
    return 0;
}