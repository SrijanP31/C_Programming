#include <stdio.h>

int gcd(int a,int b){
	int max,min;
	if(a>b){
		max = a;
		min = b;
	}else{
		max = b;
		min = a;
	}
	if(max%min==0)
		return min;
	else{
		int r = max%min;
		max = min;
		min = r;
		return gcd(max,min);
	}
}

int main(){
	int c = gcd(12,42);
	printf("%d",c);
}
