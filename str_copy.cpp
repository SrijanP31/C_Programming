#include <stdio.h>

int main(){
	char str1[20], str2[20];
	scanf("%s",str1);
	int c=0;
	while(str1[c]){
		str2[c] = str1[c];
		c++;
	}
	str2[c] ='\0';
	printf("%s",str2);
}
