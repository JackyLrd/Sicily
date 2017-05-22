#include <stdio.h>
int main(void)
{
	int n,m,d,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d%d",&m,&d);
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
		j=(k-2)%7;
		if(j==0) printf("Sunday\n");
		else if(j==1) printf("Monday\n");
		else if(j==2) printf("Tuesday\n");
		else if(j==3) printf("Wednesday\n");
		else if(j==4) printf("Thursday\n");
		else if(j==5) printf("Friday\n");
		else printf("Saturday\n");
	}
	return 0;
}
