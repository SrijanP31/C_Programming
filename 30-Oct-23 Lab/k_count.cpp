#include <stdio.h>

int main(){
	int n,k;
	printf("Enter number of elements in array:");
	scanf("%d", &n);
	int a[n];
	printf("Enter the values of elements:");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter value of k:");
	scanf("%d",&k);
	int c=0;
	for(int i=0;i<n;i++){
		if(a[i]==k){
			c++;
		}
	}
	printf("The number %d appeared %d time(s)",k,c);
}
