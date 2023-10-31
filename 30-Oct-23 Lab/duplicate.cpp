#include <stdio.h>

int main(){
	int n,d=0;
	printf("Enter number of elements in array:");
	scanf("%d", &n);
	int arr[n],arr_dup[n];
	printf("Enter the values of elements:");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
  	for(int i=0;i<n;i++){
		int c = 0;
		for(int j=0;j<n;j++){
			if(arr[i] == arr[j]){
				c++;
			}
		}
		if(c>1){
			int f=0;
			for(int k=0;k<d;k++){
				if(arr[i] == arr_dup[k]){
					f++;
					break;
				}
			}
			if(f==0){
				arr_dup[d] = arr[i];
				d++;
			}
			
		}
	}
	
	for(int i=0;i<d;i++){
		printf("%d ",arr_dup[i]);
	}
	
}
