#include <stdio.h>

int main(){
	int n;
	printf("Enter ther value of n:");
	scanf("%d", &n);
	int a[n][n];
	printf("Enter values of matrix: \n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
	}
		
	printf("Printing the matrix\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%d ",a[i][j]);
		}
	printf("\n");
	}
	
}
