#include <stdio.h>

int main(){
	float a,b,mult1;
	int mult2;
	printf("Enter the values of a,b:");
	scanf("%f %f",&a, &b);
	mult1 = a*b;
	mult2 = a*b;
	printf("The value of product in float is %f \n",mult1);
	printf("The value of product in int is %d",mult2);
	
	return 0;
}
