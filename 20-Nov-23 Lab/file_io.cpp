#include <stdio.h>

int main(){
	FILE *fp;
	fp = fopen("INPUT.txt","w");
	char s[100];
	printf("Enter a string:");
	gets(s);
	fprintf(fp,"%s",s);
	fclose(fp);
	
	fp = fopen("INPUT.txt","r");
	char t[100];
	fgets(t,100,fp);
	printf("%s",t);
	fclose(fp);
	return 0;
}
