#include <stdio.h>

float avg_arr(int *a,int n){
	int sum = 0;
	for(int i=0;i<n;i++){
		sum += *(a+i);  
	}
	float avg = (float)sum/n;
	return avg;
}
int main(){
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("%f",avg_arr(a,10));
}
