#include <stdio.h>

int main(){
	int n;
	printf("Enter number of elements in array:");
	scanf("%d", &n);
	int a[n];
	printf("Enter the values of elements:");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j] > a[j+1]){
				int t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
	
	printf("Sorted array: ");
	for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}
}
