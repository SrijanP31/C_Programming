#include <stdio.h>

int main(){
	int n;
	printf("Enter number of elements in array:");
	scanf("%d", &n);
	int arr[n];
	printf("Enter the values of elements:");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		int c=0;
		for(int j=0;j<n;j++){
			if(arr[i]==arr[j]){
				c++;
			}
		}
		if(c==1){	
			printf("%d \n",arr[i]);
		}
}
}
