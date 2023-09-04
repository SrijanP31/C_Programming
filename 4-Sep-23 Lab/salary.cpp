#include <stdio.h>

int main(){
	
	float da,sal,hra,tot;
	printf("Enter basic salary:");
	scanf("%f",&sal);
	da = sal*45/100;
	hra = sal*16/100;
	tot = sal + da + hra;
	printf("The total salary is %f", tot);
	
	return 0;
}
