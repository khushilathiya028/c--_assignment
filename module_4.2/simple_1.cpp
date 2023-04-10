//WAP to create simple calculator using class 

#include<iostream>
using namespace std;

class A
{
	public :
		void calculator(int a, int b)
		{
			cout<<"this addition of a and b is :"<<a + b <<endl;
			cout<<"this substraction of a and b is :"<<a - b <<endl;
			cout<<"this mutipliaction of a and b is :"<<a * b <<endl;
			cout<<"this devision of a and b is :"<<a / b <<endl;
			cout<<"this modulo of a and b is :"<<a % b <<endl;
		}
};

		int main()
		{
			A obj;
			obj.calculator(50, 20);
			
		}