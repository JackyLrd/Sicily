#include <stdio.h>
#include <string.h>
int main(void)
{
	char key[20],temp[20],in[200],out[200],t;
	int keylen,div,n,i,j,k,p,inlen;
	while(scanf("%s",&key)&&(key[0]!='T'||key[1]!='H'||key[2]!='E'||key[3]!='E'||key[4]!='N'||key[5]!='D'))
	{
		scanf("%s",&in);
		keylen=strlen(key);
		inlen=strlen(in);
		div=inlen/keylen;
		for(i=0;i<keylen;i++)
		{
			temp[i]=key[i];
		}
		for(i=0;i<keylen;i++)
		{
			for(j=0;j<keylen-1;j++)
			{
				if(temp[j]>temp[j+1])
				{
					t=temp[j];
					temp[j]=temp[j+1];
					temp[j+1]=t;
				}
			}
		}
		p=0;
		for(i=0;i<keylen;i++)
		{
		    for(j=0;j<keylen;j++)
			{
				if(temp[i]==key[j])
				{
					for(k=j*div;k<(j+1)*div;k++,p++)
					{
						out[k]=in[p];
					}
					key[j]='0';
					break;
				}
				else;
		    }
		}
        for(i=0;i<div;i++)
        {
        	for(j=i;j<=i+inlen-div;j=j+div)
        	{
        		printf("%c",out[j]);
			}
		}
		printf("\n");
	}
	return 0;
}
