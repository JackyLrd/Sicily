#include <stdio.h>
#include <math.h>
int main(void)
{
	int s[60],ans[60],a,b,i,j,temp,T;
	scanf("%d %d",&a,&b);
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
		scanf("%d",&s[i]);
	}
	ans[1]=a;
	ans[2]=b;
	for(j=1;j<=T;j++)
	{
		a=ans[1];
		b=ans[2];
		if(s[j]==1||s[j]==2) printf("%d\n",ans[s[j]]);
		else
		{
			i=3;
			while(i<=s[j])
	        {
	        	temp=b-a;
		        a=abs(temp);
		        temp=a;
		        a=b;
		        b=temp;
		        i++;
	        }
	        ans[j]=b;
		printf("%d\n",ans[j]);
		}
	}
	return 0;
}

