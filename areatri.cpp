#include <stdio.h>
#include <math.h>
double area(double T[3][2]);
double area(double T[3][2])
{
	double a,b,c,p,ans;
	a=(T[0][0]-T[1][0])*(T[0][0]-T[1][0])+(T[0][1]-T[1][1])*(T[0][1]-T[1][1]);
	a=sqrt(a);
	b=(T[0][0]-T[2][0])*(T[0][0]-T[2][0])+(T[0][1]-T[2][1])*(T[0][1]-T[2][1]);
	b=sqrt(b);
	c=(T[1][0]-T[2][0])*(T[1][0]-T[2][0])+(T[1][1]-T[2][1])*(T[1][1]-T[2][1]);
	c=sqrt(c);
	p=(a+b+c)/2;
	p=p*(p-a)*(p-b)*(p-c);
	ans=sqrt(p);
	return ans;
}
