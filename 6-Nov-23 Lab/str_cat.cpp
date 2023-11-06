#include <stdio.h>

int main(){
	char str1[40],str2[20];
	printf("Enter first string:");
	scanf("%s",str1);
	printf("Enter second string:");
	scanf("%s",str2);
	int c=0,d=0;
	while(str1[c] != '\0')
		c++;
	while(str2[d] != '\0'){
		str1[c] = str2[d];
		c++;
		d++;
    }
	str1[c] = '\0';
	puts(str1);
}
