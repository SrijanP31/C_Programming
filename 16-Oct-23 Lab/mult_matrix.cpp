#include <stdio.h>

int main(){
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int a[n][n], b[n][n];
	int c[n][n] = {};
	printf("Enter values of matrix 1: \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter values of matrix 2:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
			c[i][j] += (a[i][k] * b[k][j]);
		}
		}
	}
	printf("Product of matrices 1 and 2\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",c[i][j]);
		}
	printf("\n");
	}
	
}
