#include <iostream>
using namespace std;
class Date
{
public:
  Date(int newYear, int newMonth, int newDay);
  int getYear();
  void setYear(int newYear);
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
{
public:
  Person(int id, int year, int month, int day);
  Person(Person &); 
  ~Person();
  int getId();
  Date * getBirthDate();
  static int getNumberOfObjects();
 
private:
  int id;
  Date *birthDate; 
  static int numberOfObjects; 
};
int Person::numberOfObjects=0;
Person::Person(int id, int year, int month, int day)
{
	this->id=id;
	birthDate=new Date(year,month,day);
	numberOfObjects++;
}
Person::Person(Person &a)
{
	this->id=a.id;
	birthDate=new Date(a.getBirthDate()->year,a.getBirthDate()->month,a.getBirthDate()->day);
	numberOfObjects++;
}
Person::~Person()
{
	numberOfObjects--;
}
int Person::getId()
{
	return id;
}
Date *Person::getBirthDate()
{
	return birthDate;
}
int Person::getNumberOfObjects()
{
	return numberOfObjects;
}
