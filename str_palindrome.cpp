#include <stdio.h>
#include <string.h>

int main(){
	char s1[20],s2[20];
	scanf("%s",s1);
	int c=0;
	while(s1[c])
		c++;
	s2[c] = '\0';
	for(int i=0; i<c;i++){
		s2[i] = s1[c-i-1];
	}
	if(strcmp(s1,s2) == 0){
		printf("Palindrome");
	}
	else{
		printf("Not a palindrome");
	}
}
