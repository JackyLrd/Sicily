#include <iostream>
#include <string>
using namespace std;
const int mmm[12]={31,28,31,30,31,30,31,31,30,31,30,31};
const int mmm2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
class Date
{
	public:
  	Date(int y=0, int m=1, int d=1)
  	{
  		year=y;
  	  	month=m;
  	  	day=d;
  	}	  
  	static bool leapyear(int year)
  	{
  		if(year%400==0||(year%100!=0&&year%4==0))
  		return true;
  	 	else return false;
  	}
  	int getYear() const
  	{
  		return year;
  	}
  	int getMonth() const
  	{
  		return month;
  	}
  	int getDay() const
  	{
  		return day;
  	}
  	Date operator+(int x)
  	{
  		Date temp(this->year,this->month,this->day);
  		int mm;
  		if(temp.leapyear(temp.year))
  		{
  			mm=mmm2[temp.month-1];
		}
		else
			mm=mmm[temp.month-1];
  	    temp.day+=x;
  		if(temp.day>mm)
		{
			temp.day-=mm;
			temp.month++;
			if(temp.month>12)
  			{  
  				temp.year++;
  				temp.month=1;
			}
		}
  		while(temp.day>mm||temp.day<=0)
  		{
  			if(temp.day<=0)
  			{
  				while(temp.day<=0)
  				{
  					if(temp.leapyear(temp.year))
  					{
  						temp.month--;
  						if(temp.month==0)
  						{
  							temp.year--;
  							temp.month=12;				
						}
						temp.day+=mmm2[temp.month-1];
						mm=mmm2[temp.month-1];
					}
					else
					{
						temp.month--;
  						if(temp.month==0)
  						{
  							temp.year--;
  							temp.month=12;
						}
						temp.day+=mmm[temp.month-1];
						mm=mmm[temp.month-1];
					}		
				}
			}
			else
			{
				while(temp.day>mm)
  				{
  					if(temp.leapyear(temp.year))
  					{
  						mm=mmm2[temp.month-1];
  						temp.day-=mmm2[temp.month-1];
  						temp.month++;
  						if(temp.month>12)
  						{
  							temp.year++;
  							temp.month=1;
						}
  						mm=mmm2[temp.month-1];
					}
					else
					{
						mm=mmm[temp.month-1];
						temp.day-=mmm[temp.month-1];
						temp.month++;
  						if(temp.month>12)
  						{
  							temp.year++;
  							temp.month=1;
						}
						mm=mmm[temp.month-1];
					}
				}
			}
		}
		return temp;
  	}
  	Date operator-(int x)
  	{
  		Date temp(this->year,this->month,this->day);
  		int mm;
  		if(temp.leapyear(temp.year))
  		{
  			mm=mmm2[temp.month-1];
		}
		else
			mm=mmm[temp.month-1];
  	    temp.day-=x;
  		if(temp.day>mm)
		{
			temp.day-=mm;
			temp.month++;
			if(temp.month>12)
  			{  
  				temp.year++;
  				temp.month=1;
			}
		}
  		while(temp.day>mm||temp.day<=0)
  		{
  			if(temp.day<=0)
  			{
  				while(temp.day<=0)
  				{
  					if(temp.leapyear(temp.year))
  					{
  						temp.month--;
  						if(temp.month==0)
  						{
  							temp.year--;
  							temp.month=12;				
						}
						temp.day+=mmm2[temp.month-1];
						mm=mmm2[temp.month-1];
					}
					else
					{
						temp.month--;
  						if(temp.month==0)
  						{
  							temp.year--;
  							temp.month=12;
						}
						temp.day+=mmm[temp.month-1];
						mm=mmm[temp.month-1];
					}		
				}
			}
			else
			{
				while(temp.day>mm)
  				{
  					if(temp.leapyear(temp.year))
  					{
  						mm=mmm2[temp.month-1];
  						temp.day-=mmm2[temp.month-1];
  						temp.month++;
  						if(temp.month>12)
  						{
  							temp.year++;
  							temp.month=1;
						}
  						mm=mmm2[temp.month-1];
					}
					else
					{
						mm=mmm[temp.month-1];
						temp.day-=mmm[temp.month-1];
						temp.month++;
  						if(temp.month>12)
  						{
  							temp.year++;
  							temp.month=1;
						}
						mm=mmm[temp.month-1];
					}
				}
			}
		}
		return temp;
  	}
  	Date& operator+=(int x)
  	{
  		Date temp(this->year,this->month,this->day);
  		int mm;
  		if(temp.leapyear(temp.year))
  		{
  			mm=mmm2[temp.month-1];
		}
		else
			mm=mmm[temp.month-1];
  	    temp.day+=x;
  		if(temp.day>mm)
		{
			temp.day-=mm;
			temp.month++;
			if(temp.month>12)
  			{  
  				temp.year++;
  				temp.month=1;
			}
		}
  		while(temp.day>mm||temp.day<=0)
  		{
  			if(temp.day<=0)
  			{
  				while(temp.day<=0)
  				{
  					if(temp.leapyear(temp.year))
  					{
  						temp.month--;
  						if(temp.month==0)
  						{
  							temp.year--;
  							temp.month=12;				
						}
						temp.day+=mmm2[temp.month-1];
						mm=mmm2[temp.month-1];
					}
					else
					{
						temp.month--;
  						if(temp.month==0)
  						{
  							temp.year--;
  							temp.month=12;
						}
						temp.day+=mmm[temp.month-1];
						mm=mmm[temp.month-1];
					}		
				}
			}
			else
			{
				while(temp.day>mm)
  				{
  					if(temp.leapyear(temp.year))
  					{
  						mm=mmm2[temp.month-1];
  						temp.day-=mmm2[temp.month-1];
  						temp.month++;
  						if(temp.month>12)
  						{
  							temp.year++;
  							temp.month=1;
						}
  						mm=mmm2[temp.month-1];
					}
					else
					{
						mm=mmm[temp.month-1];
						temp.day-=mmm[temp.month-1];
						temp.month++;
  						if(temp.month>12)
  						{
  							temp.year++;
  							temp.month=1;
						}
						mm=mmm[temp.month-1];
					}
				}
			}
		}
  	this->year=temp.year;
	this->month=temp.month;
	this->day=temp.day;
	return *this;
  	}
  	Date& operator-=(int x)
  	{
  		Date temp(this->year,this->month,this->day);
  		int mm;
  		if(temp.leapyear(temp.year))
  		{
  			mm=mmm2[temp.month-1];
		}
		else
			mm=mmm[temp.month-1];
  	    temp.day-=x;
  		if(temp.day>mm)
		{
			temp.day-=mm;
			temp.month++;
			if(temp.month>12)
  			{  
  				temp.year++;
  				temp.month=1;
			}
		}
  		while(temp.day>mm||temp.day<=0)
  		{
  			if(temp.day<=0)
  			{
  				while(temp.day<=0)
  				{
  					if(temp.leapyear(temp.year))
  					{
  						temp.month--;
  						if(temp.month==0)
  						{
  							temp.year--;
  							temp.month=12;				
						}
						temp.day+=mmm2[temp.month-1];
						mm=mmm2[temp.month-1];
					}
					else
					{
						temp.month--;
  						if(temp.month==0)
  						{
  							temp.year--;
  							temp.month=12;
						}
						temp.day+=mmm[temp.month-1];
						mm=mmm[temp.month-1];
					}		
				}
			}
			else
			{
				while(temp.day>mm)
  				{
  					if(temp.leapyear(temp.year))
  					{
  						mm=mmm2[temp.month-1];
  						temp.day-=mmm2[temp.month-1];
  						temp.month++;
  						if(temp.month>12)
  						{
  							temp.year++;
  							temp.month=1;
						}
  						mm=mmm2[temp.month-1];
					}
					else
					{
						mm=mmm[temp.month-1];
						temp.day-=mmm[temp.month-1];
						temp.month++;
  						if(temp.month>12)
  						{
  							temp.year++;
  							temp.month=1;
						}
						mm=mmm[temp.month-1];
					}
				}
			}
		}
  	this->year=temp.year;
	this->month=temp.month;
	this->day=temp.day;
	return *this;
  	}
  	Date operator+(Date &x)
  	{
  		return Date(this->day+=x.day,this->month+=x.month,this->year+=x.year);
  	}
	Date operator-(Date &x)
  	{
  		return Date(this->day-=x.day,this->month-=x.month,this->year-=x.year);
 	}
	Date& operator+=(Date &x)
	{
		this->day+=x.day;
  		this->month+=x.month;
  		this->year+=x.year;
  		return *this;
	}
	Date& operator-=(Date &x)
	{
		this->day-=x.day;
  		this->month-=x.month;
  		this->year-=x.year;
  		return *this;
	}
	bool operator==(Date x)
	{
		if(this->day==x.day&&this->month==x.month&&this->year==x.year)
			return true;
		else 
			return false;
	}
	bool operator!=(Date x)
	{
		if(this->day==x.day&&this->month==x.month&&this->year==x.year)
			return false;
		else 
			return true;
	}
	bool operator>(Date x)
	{
		if(this->year>x.year) return true;
		else if(this->year==x.year)
		{
			if(this->month>x.month) return true;
			else if(this->month==x.month)
			{
				if(this->day>x.day) return true;
				else return false;
			}
			else return false;
		}
		else
		{
			return false;
		}
	}
	bool operator>=(Date x)
	{
		if(this->year>x.year) return true;
		else if(this->year==x.year)
		{
			if(this->month>x.month) return true;
			else if(this->month==x.month)
			{
				if(this->day>=x.day) return true;
				else return false;
			}
			else return false;
		}
		else
		{
			return false;
		}
	}
	bool operator<(Date x)
	{
		if(this->year<x.year) return true;
		else if(this->year==x.year)
		{
			if(this->month<x.month) return true;
			else if(this->month==x.month)
			{
				if(this->day<x.day) return true;
				else return false;
			}
			else return false;
		}
		else
		{
			return false;
		}
	}
	bool operator<=(Date x)
	{
		if(this->year<x.year) return true;
		else if(this->year==x.year)
		{
			if(this->month<x.month) return true;
			else if(this->month==x.month)
			{
				if(this->day<=x.day) return true;
				else return false;
			}
			else return false;
		}
		else
		{
			return false;
		}
	}
	Date& operator++()
  	{
  		this->day++;
  		if(this->leapyear(year))
  		{
  			if(day>mmm2[month-1])
  			{
  				month++;
  				day=1;
			}
			if(month>12)
			{
				month=1;
				year++;
			}
		}
  		else
	  	{
	  		if(day>mmm[month-1])
  			{
  				month++;
  				day=1;
			}
			if(month>12)
			{
				month=1;
				year++;
			}
	  	}
  		return *this;
  	}
  	Date operator++(int)
  	{
  		Date old(this->year,this->month,this->day);
  		this->day++;
  		if(this->leapyear(year))
  		{
  			if(day>mmm2[month-1])
  			{
  				month++;
  				day=1;
			}
			if(month>12)
			{
				month=1;
				year++;
			}
		}
  		else
	  	{
	  		if(day>mmm[month-1])
  			{
  				month++;
  				day=1;
			}
			if(month>12)
			{
				month=1;
				year++;
			}
	  	}
  		return old;
  	}
  	Date& operator--()
  	{
  		this->day--;
  		if(this->leapyear(year))
  		{
  			if(day==0)
  			{
  				month--;
  				day=mmm2[month-1];
			}
			if(month==0)
			{
				month=12;
				year--;
				day=mmm2[month-1];
			}
		}
  		else
	  	{
	  		if(day==0)
  			{
  				month--;
  				day=mmm[month-1];
			}
			if(month==0)
			{
				month=12;
				year--;
				day=mmm[month-1];
			}
		}
		return *this;
  	}
  	Date operator--(int)
  	{
  		Date old(this->year,this->month,this->day);
  		this->day--;
  		if(this->leapyear(year))
  		{
  			if(day==0)
  			{
  				month--;
  				day=mmm2[month-1];
			}
			if(month==0)
			{
				month=12;
				year--;
				day=mmm2[month-1];
			}
		}
  		else
	  	{
	  		if(day==0)
  			{
  				month--;
  				day=mmm[month-1];
			}
			if(	month==0)
			{
				month=12;
				year--;
				day=mmm[month-1];
			}
		}
  		return old;
  	}
  	int& operator[](string s)
  	{
  		if(s=="day") return this->day;
  		if(s=="year") return this->year;
  		if(s=="month") return this->month;
  	}
  	friend ostream& operator<<(ostream&out,const Date&x)
  	{
  		out<<x.year<<"-"<<x.month<<"-"<<x.day;
		return out; 
  	}
  	int year,month,day;  
};
void f()
{
  	Date date(2003,12,31);

  	cout << "date = " << date << endl;
  	cout << "date+1 = " << date+1 << endl;
  	cout << "date-1 = " << date-1 << endl;
  	date+=366;
 	cout << "date = " << ++date << endl;
  	date-=365;
  	cout << "date = " << date << endl;
  	date-=-365;
  	cout << "date = " << date << endl;
  	date+=-366;
  	cout << "date = " << date << endl;
    cout << endl;
}
int main()
{
	f();
}

