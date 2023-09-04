#include <stdio.h>

int main(){
	int a,b,sum, sub, mul, div;
	printf("Enter two numbers:");
	scanf("%d %d",&a, &b);
	sum = a + b;
	sub = a - b;
	mul = a * b;
	div = a /b;
	printf("The sum is %d \n",sum);
	printf("The difference is %d \n",sub);
	printf("The product is %d \n", mul);
	printf("The quotient is %d", div);
	return 0;
}
