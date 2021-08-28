/* Define a class to represent a bank account. Include the following members
Data Members
1. Name of the depositor
2. Account number
3. Type of account
4. Balance amount in the account.
Member functions
1. To assign initial values
2. To deposit an amount
3. To withdraw an amount after checking the balance
4. To display name and balance. */

#include<iostream>

using namespace std;

class Bank
{

	char name[10];
	char toa[10];
	long int a_num;
	double bal;
	double dpst;
	double withdraw;
	public:
	Bank()
	{
	
		cout<<"\n enter the name:";
		cin>>name;
			
		cout<<"\n account number:";
		cin>>a_num;
			
		cout<<"\n type of account:";
		cin>>toa;
			
		cout<<"\n balance amount in the account:";
		cin>>bal;
			
	}
	
	void initial()
	{
		cout<<"\n bal before any withdraw:";
		cout<<bal;
	}
	
	void deposit()
	{
		cout<<"\n enter deposit:";
		cin>>dpst;
		
		bal = bal + dpst;
	}
	
	void withdraw_a()
	{
		cout<<"\n enter amount for withdraw:";
		cin>>withdraw;
		
		bal = bal - withdraw;
		
	}
	
	void display()
	{
		cout<<"\n enter the name:"<<name;
		cout<<"\n enter the account num:"<<a_num;
		
		cout<<"\n enter the account type:"<<toa;
		
		cout<<"\n enter the bal:"<<bal;
	}
	
};
	
		
int main()
{

Bank b;

b.initial();
b.deposit();
b.withdraw_a();
b.display();

}
	
			
