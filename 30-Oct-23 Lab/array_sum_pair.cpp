#include <stdio.h>

int main(){
	int n,sum,c=0;
	printf("Enter number of elements in array:");
	scanf("%d", &n);
	int arr[n];
	printf("Enter the values of elements:");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter sum:");
	scanf("%d",&sum);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[i]+arr[j] == sum){
				printf("%d %d",arr[i],arr[j]);
				c = 1;
			}
		}
		if(c==1){
			break;
		}
	}
}
