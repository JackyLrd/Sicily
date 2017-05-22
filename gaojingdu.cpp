#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

void add(char a[],char b[],char back[])
{
    int i,j,k,up,x,y,z,l;
    char *c;
    if (strlen(a)>strlen(b)) l=strlen(a)+2; else l=strlen(b)+2;
          c=(char *) malloc(l*sizeof(char));
    i=strlen(a)-1;
    j=strlen(b)-1;
    k=0;up=0;
    while(i>=0||j>=0)
    {
        if(i<0) x='0'; else x=a[i];
        if(j<0) y='0'; else y=b[j];
        z=x-'0'+y-'0';
        if(up) z+=1;
        if(z>9) {up=1;z%=10;} else up=0;
        c[k++]=z+'0';
        i--;j--;
    }
    if(up) c[k++]='1';
    i=0;
    c[k]='\0';
    for(k-=1;k>=0;k--)
    back[i++]=c[k];
    back[i]='\0';
}

void fun(int n)
{
	char ans[1000], a[1000], b[1000];
		memset(ans, 0, sizeof(ans));
		ans[0] = '2';
		for(int i = 0; i < n; i++)
		{
			strcpy(a,ans);
			strcpy(b,ans);
			add(a,b,ans);
		}
		ans[strlen(ans) - 1] -= 2;
		for(int j = 0; j < strlen(ans); j++)
		{
			cout << ans[j];
		}
}
int main()
{
	int n;
	cin >> n;
	fun(n);
	while(cout << endl && cin >> n && cout << endl)
	{
		fun(n);
	}
	return 0;
}
