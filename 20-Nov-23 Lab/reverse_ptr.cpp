#include <stdio.h>

int main(){
	char s[20];
	printf("Enter a string: ");
	scanf("%s",s);
	char *str = s;
	int i = 0;
	while(*str!='\0'){
		++i;
		++str;
	}
	--str;
	while(i>0){
		printf("%c",*(str--));
		i--;
	}
	
}
