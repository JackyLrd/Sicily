#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
class Rational
{
public:
  Rational();
  Rational(long numerator, long denominator)
  {
  	if(numerator==0)
  	{
  		this->numerator=0;
  		this->denominator=1;
	}
	else
	{
		long temp=gcd(numerator,denominator);
  		this->numerator=numerator/temp;
 	 	this->denominator=denominator/temp;
	}	
  }
  string toString();

  // Define function operators for relational operators
  bool operator<(const Rational &secondRational) const
  {
  	if((this->numerator*secondRational.denominator-this->denominator*secondRational.numerator)>0)
  	{
  		if(this->denominator*secondRational.denominator>0) return false;
  		else return true;
	}
	else if((this->numerator*secondRational.denominator-this->denominator*secondRational.numerator)<0)
	{
		if(this->denominator*secondRational.denominator>0) return true;
  		else return false;
	}
	else return false;
  }
  bool operator<=(const Rational &secondRational) const
  {
  	if((this->numerator*secondRational.denominator-this->denominator*secondRational.numerator)>0)
  	{
  		if(this->denominator*secondRational.denominator>0) return false;
  		else return true;
	}
	else if((this->numerator*secondRational.denominator-this->denominator*secondRational.numerator)<0)
	{
		if(this->denominator*secondRational.denominator>0) return true;
  		else return false;
	}
	else return true;
  }
  bool operator>=(const Rational &secondRational) const
  {
  	if((this->numerator*secondRational.denominator-this->denominator*secondRational.numerator)>0)
  	{
  		if(this->denominator*secondRational.denominator>0) return true;
  		else return false;
	}
	else if((this->numerator*secondRational.denominator-this->denominator*secondRational.numerator)<0)
	{
		if(this->denominator*secondRational.denominator>0) return false;
  		else return true;
	}
	else return true;
  }
  bool operator!=(const Rational &secondRational) const
  {
  	if(this->numerator!=secondRational.numerator||this->denominator!=secondRational.denominator) return true;
  	else return false;
  }
  bool operator==(const Rational &secondRational) const
  {
  	if(this->numerator==secondRational.numerator&&this->denominator==secondRational.denominator) return true;
  	else return false;
  }

  // Define function operators for arithmetic operators
  Rational operator+(const Rational &secondRational) const
  {
  	long temp1=this->numerator*secondRational.denominator+this->denominator*secondRational.numerator;
  	long temp2=this->denominator*secondRational.denominator;
  	return Rational(temp1,temp2);
  }
  Rational operator-(const Rational &secondRational) const
  {
  	long temp1=this->numerator*secondRational.denominator-this->denominator*secondRational.numerator;
  	long temp2=this->denominator*secondRational.denominator;
  	return Rational(temp1,temp2);
  }
  Rational operator*(const Rational &secondRational) const
  {
  	long temp1=this->numerator*secondRational.numerator;
	long temp2=this->denominator*secondRational.denominator;
	return Rational(temp1,temp2);
  }
  Rational operator/(const Rational &secondRational) const
  {
  	long temp1=this->numerator*secondRational.denominator;
	long temp2=this->denominator*secondRational.numerator;
	return Rational(temp1,temp2);
  }

  // Define function operators for shorthand operators
  Rational& operator+=(const Rational &secondRational)
  {
  	long temp1=this->numerator*secondRational.denominator+this->denominator*secondRational.numerator;
  	long temp2=this->denominator*secondRational.denominator;
  	Rational temp(temp1,temp2);
  	*this=temp;
  	return *this;
  }
  Rational& operator-=(const Rational &secondRational)
  {
  	long temp1=this->numerator*secondRational.denominator-this->denominator*secondRational.numerator;
  	long temp2=this->denominator*secondRational.denominator;
  	Rational temp(temp1,temp2);
  	*this=temp;
  	return *this;
  }
  Rational& operator*=(const Rational &secondRational)
  {
  	long temp1=this->numerator*secondRational.numerator;
	long temp2=this->denominator*secondRational.denominator;
	Rational temp(temp1,temp2);
  	*this=temp;
  	return *this;
  }
  Rational& operator/=(const Rational &secondRational)
  {
  	long temp1=this->numerator*secondRational.denominator;
	long temp2=this->denominator*secondRational.numerator;
	Rational temp(temp1,temp2);
  	*this=temp;
  	return *this;
  }

  // Define function operator []
  long& operator[](const int &index)
  {
  	if(index==0) return this->numerator;
  	else return this->denominator;
  }

  // Define function operators for prefix ++ and --
  Rational& operator++()
  {
  	(*this)+=Rational(1,1);
  	return *this;
  }
  Rational& operator--()
  {
  	(*this)-=Rational(1,1);
  	return *this;
  }

  // Define function operators for postfix ++ and --
  Rational operator++(int dummy)
  {
  	Rational temp=*this;
  	(*this)+=Rational(1,1);
  	return temp;
  }
  Rational operator--(int dummy)
  {
  	Rational temp=*this;
  	(*this)-=Rational(1,1);
  	return temp;
  }

  // Define function operators for unary + and -
  Rational operator+()
  {
  	Rational temp(*this);
  	return temp;
  }
  Rational operator-()
  {
  	Rational temp(0-numerator,denominator);
  	return temp;
  }

  // Define the output and input operator
  friend ostream &operator<<(ostream &stream, Rational &rational);
  friend istream &operator>>(istream &stream, Rational &rational);

  // Define function operator for conversion
  operator double()
  {
  	double x=numerator;
  	double y=denominator;
  	return x/y;
  }
  
  // Add any member needed here

private:
  long numerator;
  long denominator;
  static long gcd(long n, long d)
  {
  	long r;
  	while(d != 0)
    {
        r = d;
        d = n % d;
        n = r;
    }
    return n;
  }
};
Rational::Rational()
{ 
  numerator = 0;  
  denominator = 1; 
}
string Rational::toString()
{
  char s[50];
  if ( denominator == 1) {  
    sprintf(s,"%ld",numerator);
  } else {
    sprintf(s,"%ld/%ld",numerator,denominator);
  }
  return string(s);
}
ostream& operator<<(ostream &str, Rational &rational)
{
  cout << rational.toString();
  return str;
}
istream &operator>>(istream &stream, Rational &rational)
{
	char x;
	stream>>rational.numerator>>x>>rational.denominator;
	return stream;
}
int main()
{
	Rational a(0,1);
	cout<<a<<endl;
	Rational b(1,8);
	cout<<b<<endl;
	Rational c(1,3);
	cout<<c<<endl;
	c++;
	cout<<c<<endl;
	c--;
	cout<<c<<endl;
	--c;
	cout<<c<<endl;
	++c;
	cout<<c<<endl;
	c+=b;
	cout<<c<<endl;
	c-=b;
	cout<<c<<endl;
	c*=b;
	cout<<c<<endl;
	c/=b;
	cout<<c<<endl;
	cout<<c[0]<<endl;
	cout<<c[1]<<endl;
	cout<<+c<<endl;
	cout<<-c<<endl;
	double x=b;
	cout<<x<<endl;
}
