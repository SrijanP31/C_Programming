#include <stdio.h>

int main(){
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(int i=n;i>0;i--){
		for(int j=0;j<n-i;j++){
			printf(" ");
		}
		for(int k=0;k<i;k++){
			printf("*");
		}
		printf("\n");
	}
}
