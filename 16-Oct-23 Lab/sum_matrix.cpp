#include <stdio.h>

int main(){
	int a[2][2], b[2][2], c[2][2];
	printf("Enter values of matrix 1: \n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter values of matrix 2:\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			scanf("%d",&b[i][j]);
		}
	}
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("Sum of matrices 1 and 2\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%d ",c[i][j]);
		}
	printf("\n");
	}
	
}
