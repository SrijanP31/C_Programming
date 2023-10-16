#include <stdio.h>

int main(){
	int n=3,s=0,t=0;
	int a[n][n], b[n][n];
	printf("Enter values of matrix 1: \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i>=j){
				b[i][j]= a[i][j];
			}else{
				b[i][j] = 0;
			}
		}
	}
	
	printf("Printing the lower triangular matrix\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ",b[i][j]);
		}
	printf("\n");
	}
	
}
