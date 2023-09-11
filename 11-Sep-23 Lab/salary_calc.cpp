#include <stdio.h>

int main(){
	
	float da,sal,hra,tot,ta,t;
	printf("Enter tier of city:");
	scanf("%f",&t);
	printf("Enter basic salary:");
	scanf("%f",&sal);
	
	da = sal*44/100;
	ta = sal*8/100;
	
	if (t==1){
		hra = sal*24/100;
	}else if (t==2){
		hra = sal*16/100;
	}else{
		hra = sal*12/100;
	}
	
	tot = sal + da + hra+ta;
	printf("The total salary is %f", tot);
	
	return 0;
}
