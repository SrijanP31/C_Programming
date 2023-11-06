#include <stdio.h>

int main(){
	char str1[20],str2[20];
	scanf("%s",str1);
	scanf("%s",str2);
	int c=0,flag=0;
	while(str1[c]){
		if(str1[c] != str2[c]){
			flag = 1;
			printf("Unequal");
			break;
		}
		c++;
	}
	if(str1[c] == str2[c]){
		printf("Equal");
	}
	else if(flag==0){
		printf("Unequal");
	}
	return 0;
}

