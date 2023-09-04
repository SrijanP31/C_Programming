#include <stdio.h>

int main(){
	int a,b,z;
	
	printf("Enter value for a:");
	scanf("%d",&a);
	printf("Enter value for b:");
	scanf("%d",&b);
	
	z = a;
	a = b;
	b = z;
	
	printf("The value of a is now %d\n", a);
	printf("The value of b is now %d", b);
	return 0;
}
