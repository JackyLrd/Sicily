#include <stdio.h>
int checky(int x);
int checkm(int m,int y,int d);
void month(int m);
int main(void)
{
	int x,y,n,m,i,j,k,f;
	scanf("%d %d %d",&y,&f,&m);
	j=y;
	y=checky(y);
	k=checkm(m,y,f);
	month(m);
	printf("%d\n",j);
	printf("     Sun     Mon     Tue     Wed     Thu     Fri     Sat\n");
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    {
    	x=31;
	}
	else if(m==2)
	{
		if(y==366) x=29;
		else x=28;
	}
	else
	{
		x=30;
	}
    for(i=1;i<=k;i++)
    {
    	printf("        ");
	}
	for(i=1;i<=7-k;i++)
	{
		printf("       %d",i);
	}
	printf("\n");
	for(j=8-k;j<=29-k;j=j+7)
	{
		for(i=j;i<=j+6;i++)
		{ 
		    if(i<=9) printf("       ");
		    else printf("      ");
		    if(i<=x) printf("%d",i);
			else;
		}
		printf("\n");
	}
	return 0;
}
int checky(int x)
{
	int y;
	if((x%400==0)||(x%4==0&&x%100!=0)) y=366;
	else y=365;
	return y;
}
int checkm(int m,int y,int d)
{
	int k;
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
		else if(m==12) k=335+d;
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
		else if(m==12) k=334+d;
		k=k%7;
	}
	return k;
}
void month(int m)
{
	if(m==1) printf("January ");
	else if(m==2) printf("February ");
	else if(m==3) printf("March ");
	else if(m==4) printf("April ");
	else if(m==5) printf("May ");
	else if(m==6) printf("June ");
	else if(m==7) printf("July ");
	else if(m==8) printf("August ");
	else if(m==9) printf("September ");
	else if(m==10) printf("October ");
	else if(m==11) printf("November ");
	else if(m==12) printf("December ");
}
