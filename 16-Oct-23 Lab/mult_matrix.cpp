#include <stdio.h>

int main(){
	int a[2][2], b[2][2];
	int c[2][2] = {};
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
			for(int k=0;k<2;k++){
			c[i][j] += (a[i][k] * b[k][j]);
		}
		}
	}
	printf("Product of matrices 1 and 2\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%d ",c[i][j]);
		}
	printf("\n");
	}
	
}
