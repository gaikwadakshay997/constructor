/*Define class student which shows the information about the Student using
constructor and destructor - Include the following members
Data Members
1. Name of the Student
2. Roll No
3. Address
4. Percentage
Member functions
1. To assign initial values
2. To accept the values from user.
3. To display all data to user including Grade by using following conditions
a. Per>=70 Distinction
b. Per <70 and Per >=60 First Class
c. Per<60 and Per>=40 Second class
d. Per<40 Student is Fail */


#include<iostream>
using namespace std;

class Student 
{

	char name[10];
	int roll_no;
	double Per;
	char address [10];
	
	public:
	void initial()
	{
	}
	void get()
	{
		cout<<"enter name of student:";
		cin>>name;
		
		cout<<"\n roll no:";
		cin>>roll_no;
		
		cout<<"\n address:";
		cin>>address;
		
		cout<<"\n percentage:";
		cin>>Per;
	}
	
	void show()
	{
	
		if(Per>=70)
		{
			cout<<"\ndistiction";
			
		}
		if(Per <70 && Per >=60)
		{
			cout<<"\n first class";
			
		}
		
		if(Per<60 && Per>=40)
		
		{	
			cout<<"\n second class:";
		}
		
		if( Per<40 )
		{
			cout<<"\nStudent is Fail:";
		}
		
	}
	
};

int main()

{
	Student s;
	s.initial();
	s.get();
	s.show();
	
}
	
