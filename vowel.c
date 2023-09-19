#include<stdio.h>
int main(){
	int i,ch,counts=0;
	char str[100];
	scanf("%s",str);
	while((ch=str[i])!='\0'){
		switch(ch){
				case 'a':case 'e':case 'i':case 'o':case 'u':case 'A':case 'I':case 'E':case 'O':case 'U':
				counts++;
				break;
		}	
	i++;
	}
	printf("vowel count:%d\n", counts);
	return 0;
}
