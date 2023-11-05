#include <stdio.h>

int main(){
	int n;
	printf("Enter a value for n:");
	scanf("%d",&n);
	int a[n][n], b[n][n], c[n][n];
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
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("Sum of matrices 1 and 2\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<n;j++){
			printf("%d ",c[i][j]);
		}
	printf("\n");
	}
	
}
