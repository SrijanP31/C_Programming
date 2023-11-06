#include <stdio.h>
#include <string.h>

int main(){
	char str[20],ch='e';
	gets(str);
	scanf("%c",&ch);
	int c=0,flag=0;
	while(str[c]){
		if(str[c] == ch){
			printf("%d",c);
			flag = 1;
			break;
		}
		c++;
	}
	if(flag==0)
		printf("Not found");
	
	return 0;
}
