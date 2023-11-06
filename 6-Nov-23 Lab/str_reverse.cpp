#include <stdio.h>

int main(){
	char s[20];
	scanf("%s",s);
	int c=0;
	while(s[c])
		c++;
	for(int i=0; i<c/2;i++){
		char t = s[i];
		s[i] = s[c-i-1];
		s[c-i-1] = t;
	}
	printf("%s",s);
}
