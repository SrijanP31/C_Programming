#include <stdio.h>

int main(){
	char str[20];
	scanf("%s",str);
	int len=0;
	while(str[len])
		len++;
	printf("%d",len);
}
