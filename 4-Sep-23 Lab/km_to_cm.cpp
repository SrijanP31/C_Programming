#include <stdio.h>

int main(){
	int km, m, cm, mm;
	printf("Enter length in km:");
	scanf("%d",&km);
	
	m = km * 1000;
	cm = m * 100;
	mm = cm * 10;
	
	printf("The length in meter: %d \n", m);
	printf("The length in centimeter: %d \n", cm);
	printf("The length in millimeter: %d \n", mm);
	
	return 0;
}
