#include <stdio.h>
#include <string.h>

int main(){
	char s[20];
	printf("Enter a string:");
	scanf("%s",s);
	char vow[5] = {'a','e','i','o','u'};
	for(int i=0;i<5;i++){
		if(strchr(s,vow[i]))
			printf("%c ",vow[i]);
		}
	}

