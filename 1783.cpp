#include <stdio.h>
#include <string.h>
int main(void)
{
	char in[100],temp;
	int n,i,j,k,len,q,p,T,a[100];
	scanf("%d",&T);
	for(j=1;j<=T;j++)
	{
		scanf("%s",&in);
		len=strlen(in);
		k=0;
		for(i=0;i<len;i++)
		{
			if(in[i]=='_')
			{
				k++;
				a[k]=i;
			
			}
			else;
		}
		if(k==0) 
		{
			for(q=0,p=len-1;q<=len/2;q++,p--)
			{
				temp=in[q];
				in[q]=in[p];
				in[p]=temp;
			}
		}
		else
		{
			i=1;
		    while(i<k)
		    {
			    for(q=a[i]+1,p=a[i+1]-1;q<=(a[i+1]+a[i])/2;q++,q--)
			    {
				    temp=in[q];
				    in[q]=in[p];
				    in[p]=temp;
			    }
			    i++;
		    }
			for(q=0,p=a[1]-1;q<a[1]/2;q++,p--)
			{
				temp=in[q];
				in[q]=in[p];
				in[p]=temp;
		    }
			for(q=a[k]+1,p=len-1;q<=(len+a[k])/2;q++,p--)
			{
			    temp=in[q];
				in[q]=in[p];
				in[p]=temp;
			}
		}
	    printf("%s\n",in);
	}
	return 0;
}
