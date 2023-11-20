#include <stdio.h>

int main(){
	FILE *fp1,*fp2,*fp3;
	fp1 = fopen("DATA.txt","r");
	fp2 = fopen("ODD.txt","w");
	fp3 = fopen("EVEN.txt","w");
	
	int c;
	while(!(feof(fp1))){
		fscanf(fp1,"%d ",&c);
		printf("%d \n",c);
		if(c%2==0)
			fprintf(fp3,"%d ",c);
		else
			fprintf(fp2,"%d ",c);
		}
	}

