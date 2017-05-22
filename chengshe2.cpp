#include <stdio.h>
int checky(int x);
int main(void)
{
	int x,y,n,m,i,j,k,d;
	scanf("%d %d",&y,&d);
	j=y;
	y=checky(y);
	for(m=1;m<=12;m++)
	{
		if(y==366)
	{
		if(m==1) k=d;
		else if(m==2) k=31+d;
		else if(m==3) k=60+d;
		else if(m==4) k=91+d;
		else if(m==5) k=121+d;
		else if(m==6) k=152+d;
		else if(m==7) k=182+d;
		else if(m==8) k=213+d;
		else if(m==9) k=244+d;
		else if(m==10) k=274+d;
		else if(m==11) k=305+d;
		else k=335+d;
		k=k%7;
	}
	else
	{
		if(m==1) k=d;
		else if(m==2) k=31+d;
		else if(m==3) k=59+d;
		else if(m==4) k=90+d;
		else if(m==5) k=120+d;
		else if(m==6) k=151+d;
		else if(m==7) k=181+d;
		else if(m==8) k=212+d;
		else if(m==9) k=243+d;
		else if(m==10) k=273+d;
		else if(m==11) k=304+d;
		else k=334+d;
		k=k%7;
	}
	if(m==1) printf("January 1, %d is",j);
	else if(m==2) printf("February 1, %d is",j);
	else if(m==3) printf("March 1, %d is",j);
	else if(m==4) printf("April 1, %d is",j);
	else if(m==5) printf("May 1, %d is",j);
	else if(m==6) printf("June 1, %d is",j);
	else if(m==7) printf("July 1, %d is",j);
	else if(m==8) printf("August 1, %d is",j);
	else if(m==9) printf("September 1, %d is",j);
	else if(m==10) printf("October 1, %d is",j);
	else if(m==11) printf("November 1, %d is",j);
	else printf("December 1, %d is",j);
    if(k==0) printf(" Sunday\n");
    else if(k==1) printf(" Monday\n");
    else if(k==2) printf(" Tuesday\n");
    else if(k==3) printf(" Wednesday\n");
    else if(k==4) printf(" Thursday\n");
    else if(k==5) printf(" Friday\n");
    else printf(" Saturday\n");
	}
	
}
int checky(int x)
{
	int y;
	if(x%400==0) y=366;
	else if(x%4==0)
	{
		if(x%100==0) y=365;
		else y=366;
	}
	else y=365;
	return y;
}

