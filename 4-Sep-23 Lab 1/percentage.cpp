#include <stdio.h>

int main(){
	int m1, m2, m3, m4, m5, perc;
	printf("Enter marks of 5 subjects:");
	scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
	perc = (m1+m2+m3+m4+m5)/5;
	printf("The percentage is %d %%",perc);
	return 0;
}
