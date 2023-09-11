#include <stdio.h>

int main(){
	float units;
	printf("Enter number of units used:");
	scanf("%f",&units);
	
	if (units<=100){
		printf("Electricity bill is Rs.%f",units*1.5);
	}else if (units>100 && units<200){
		printf("Electricity bill is Rs.%f", units*2.5);
	}else{
		printf("Electricity bill is Rs.%f", units*3.5);
	}
}
