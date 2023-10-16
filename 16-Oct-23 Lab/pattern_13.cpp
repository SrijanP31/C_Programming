#include <stdio.h>

int main(){
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<i+1;j++){
			printf("* ");
		}
		for(int k=0;k<2*(n-i-1);k++){
			printf("  ");
		}
		for(int l=0;l<i+1;l++){
			printf("* ");
		}
		printf("\n");
	}
	for(int i=n;i>0;i--){
		for(int j=0;j<i;j++){
			printf("* ");
		}
		for(int k=0;k<2*(n-i);k++){
			printf("  ");
		}
		for(int l=0;l<i;l++){
			printf("* ");
		}
		printf("\n");
	}
}
