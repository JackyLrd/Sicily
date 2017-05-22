#include <iostream>
using namespace std;
class Date
{
public:
  Date(int newYear, int newMonth, int newDay);
  int getYear();
  void setYear(int newYear);

private:
  int year;
  int month;
  int day;
};
Date::Date(int newYear, int newMonth, int newDay)
{
	year=newYear;
	month=newMonth;
	day=newDay;
}
int Date::getYear()
{
	return year;
}
void Date::setYear(int newYear)
{
	year=newYear;
}
class Person
{private:
  int id;
  Date *birthDate; 
  static int numberOfObjects; 
public:
  Person(int id, int year, int month, int day)
{
	id=id;
}
Person(Person &a)
{
	id=a.id;
}
~Person(){
}
int getId()
{
	return id;
}
Date * getBirthDate()
{
	return birthDate;
}
static int getNumberOfObjects()
{
	return numberOfObjects;
}
 
};

