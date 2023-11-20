#include <stdio.h>

struct a{
	int n1;
	double n2;
	struct b{
		int x1;
		double x2;		
	}n3;
};

int main(){
	struct a a1;
	a1.n1 = 7;
	a1.n2 = 9.67;
	a1.n3.x1 = 4;
	a1.n3.x2 = 3.14;
	
	printf("%d %f %d %f",a1.n1,a1.n2,a1.n3.x1,a1.n3.x2);
}
