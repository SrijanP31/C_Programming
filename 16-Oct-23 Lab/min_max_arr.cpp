#include <stdio.h>

int main(){
	int n,min,max,sum;
	printf("Enter the number of elements in array:");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	min=a[0];
	max=a[0];
	for(int j=0;j<n;j++){
		sum += a[j];
		
		if (min>a[j])
			min=a[j];
		
		if (max<a[j])
			max=a[j];
		
	}
	float avg = (float) sum/n;
	printf("Minimum: %d \n",min);
	printf("Maximum: %d \n",max);
	printf("Average: %f",avg);
}
