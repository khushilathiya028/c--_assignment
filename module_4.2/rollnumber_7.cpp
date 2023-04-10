/*
Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the marks
obtained in two subjects and class result contains the total marks obtained in
the test. The class result can inherit the details of the marks obtained in the
test and roll number of students. (Multilevel Inheritance) 
*/

#include<iostream>
using namespace std;

class student
{
	public :
		void number(int a)
		{
		cout<<"student roll number"<<a<<endl;	
		}
};

class marks : public student 
{
	public : 
	void Economic(int b)
	{
		cout<<"Economic subjects marks"<<b<<endl;
	}
	
	void Account(int c)
	{
		cout<<"Account subjects marks"<<c<<endl;
	}
};

class test : public marks
{
	public :
		void result(int d)
		{
			cout<<"student results"<<d<<endl;
		}
};

int main()
{
	test obj;
	obj.number(1);
	obj.Account(30);
	obj.Economic(80);
}