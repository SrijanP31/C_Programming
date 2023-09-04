#include <stdio.h>

int main(){
	int a,b;
	printf("Enter the values of a,b:");
	scanf("%d %d", &a, &b);
	b = a + b;
	a = b - a;
	b = b - a;
	printf("The value of a: %d \n",a);
	printf("The value of b: %d",b);

	return 0;
}
