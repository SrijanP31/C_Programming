#include <stdio.h>

int main(){
	int n=3,s=0,t=0;
	int a[n][n];
	printf("Enter values of matrix 1: \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		s += a[i][i];
	}
	for(int j=0;j<n;j++){
		t += a[j][n-j-1];
	}
	printf("Sum of principle diagonal: %d\n", s);
	printf("Sum of other diagonal: %d\n",t);
}
