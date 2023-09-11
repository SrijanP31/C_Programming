#include <stdio.h>

int main(){
	int d,m,y;
	printf("Enter date month year:");
	scanf("%d %d %d", &d, &m, &y);
	if (m<=0 || m>12 || d<=0){
		printf("Invalid");
	}
	else if (m==2){
		if (y%4==0 && (y%100!=0 || y%400==0)){
			if(d>29){
				printf("Invalid");
			}else{
				d++;
				if (d>29){
					m++;
					d = 1;
				}
			printf("The next day is: %d %d %d",d,m,y);

			}
		}else{
			if(d>28){
				printf("Invalid");
			}else{
				d++;
				if (d>28){
					m++;
					d = 1;
				}
				printf("The next day is: %d %d %d",d,m,y);
			}		
		}
	}
	else if(m==12){
		if (d<=31){
			d++;
			if(d>31){
				d = 1;
				m = 1;
				y++;
			}
		printf("The next day is: %d %d %d",d,m,y);

		}else{
			printf("Invalid");
	}
	}
	else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
		if (d<=31){
			d++;
			if(d>31){
				d = 1;
				m++;
			}
			printf("The next day is: %d %d %d",d,m,y);
		} else{
			printf("Invalid");
		}
	}else{
		if(d<=30){
			d++;
			if(d>30){
				d=1;
				m++;
			}
			printf("The next day is: %d %d %d",d,m,y);
	}else{
		printf("Invalid");
	}
	}
		
	return 0;
}

