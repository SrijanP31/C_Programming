#include <stdio.h>

int main(){
	int n;
	printf("Enter number of elements:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the values of elements:");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<n/2;i++){
		int t = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = t;
	}
  
  for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}
	
}
