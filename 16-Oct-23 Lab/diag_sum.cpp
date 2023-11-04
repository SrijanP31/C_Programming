#include <stdio.h>

int main(){
	int n,s=0,t=0;
	printf("Enter the value of n:");
	scanf("%d",&n);
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
	printf("Sum of left diagonal: %d\n", s);
	printf("Sum of right diagonal: %d\n",t);
}
