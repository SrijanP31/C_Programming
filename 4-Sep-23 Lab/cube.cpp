#include <stdio.h>
#include <math.h>

int main(){
	int a, cube;
	printf("Enter the value of a:");
	scanf("%d", &a);
	cube = pow(a,3);
	printf("The cube of %d is %d",a,cube);
	return 0;
}

