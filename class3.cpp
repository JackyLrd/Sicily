#include <iostream>
using namespace std;
class Account
{
	public:
		int id;
		double balance;
		double annualInterestRate;
		Account()
		{
			id=0;
			balance=0;
			annualInterestRate=0;
		}
		int getId()
		{
			return id;
		}
		double getBalance()
		{
			return balance;
		}
		double getAnnualInterestRate()
		{	
			return annualInterestRate;
		}
		void setId(int id)
		{
			id=id;
		}
		void setBalance(double balance)
		{
			balance=balance;
		}
		void setAnnualInterestRate(double annualInterestRate)
		{
			annualInterestRate=annualInterestRate;
		}
		double getMonthlyInterestRate()
		{
			return (annualInterestRate / 12);
		}
		void withDraw(double x)
		{
			balance-=x;
		}
		void deposit(double x)
		{
			balance+=x;
		}
};

