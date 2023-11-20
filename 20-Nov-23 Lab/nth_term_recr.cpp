#include <stdio.h>

int nth_term(int n){	
	if(n==1)
		return 1;
	else if(n==2)
		return 2;
	else if(n==3)
		return 3;
	else if(n<=0)
		return 0;
	else
		return nth_term(n-1)+nth_term(n-2)+nth_term(n-3);
}
int main(){
	for(int i=1; i<10;i++)
		printf("%d ",nth_term(i));
}
