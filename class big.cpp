#include <iostream>
using namespace std;
class big
{
	public:
		int a[51];
		int len;
		big()
		{
			for(int i=1;i<=50;i++)
			{
				a[i]=0;
			}
			len=1;
			a[1]=0;
		}
		big(big &x)
		{
			for(int i=1;i<=50;i++)
			{
				a[i]=0;
			}
			for(int i=1;i<=x.len;i++)
				this->a[i]=x.a[i];
			this->len=x.len;
		}
		big(int x)
		{
			for(int i=1;i<=50;i++)
			{
				a[i]=0;
			}
			int i=1;
			if(x==0)
			{
				len=1;
				a[1]=0;
			} 
			else
			{
				while(x!=0)
				{
					a[i]=x%10;
					x/=10;
					i++;
				}
				len=i-1;
			}
		}
		big& operator +(big x)
		{
			int l=this->len>x.len?this->len:x.len;
			for(int i=1;i<=l;i++)
			{
				this->a[i]+=x.a[i];
				if(this->a[i]>=10)
				{
					this->a[i]-=10;
					this->a[i+1]++;
					if(this->a[len+1]!=0) l++;
					else;
				}
				else;
			}
			this->len=l;
			return  *this;
		}
		big& operator =(int x)
		{
			int i=1;
			if(x==0)
			{
				len=1;
				a[1]=0;
			} 
			else
			{
				while(x!=0)
				{
					a[i]=x%10;
					x/=10;
					i++;
				}
				len=i-1;
			}
		}
		friend ostream& operator<< (ostream& out,const big& x);
};
ostream& operator<<(ostream& out,const big& x)
{
	for(int i=x.len;i>=1;i--)
	{
		out<<x.a[i];
	}
	return out;
}
