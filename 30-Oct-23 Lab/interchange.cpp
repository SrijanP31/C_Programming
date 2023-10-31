#include <stdio.h>

int main(){
	int n;
	printf("Enter an even number:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the values of elements:");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<n;i+=2){
		int t = a[i];
		a[i] = a[i+1];
		a[i+1] = t
		;
	}
  
  for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}
}
