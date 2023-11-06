#include <stdio.h>

int main(){
	char str[20];
	scanf("%s",str);
	int c=0;
	while(str[c]){
		int val = (int) str[c];
		if(val>=65 && val<=90){
			str[c] = (char) val+32;
		}
		c++;
	}
	printf("%s",str);
	
}
