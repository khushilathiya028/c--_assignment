/*
Write a program of Addition, Subtraction, Division, Multiplication using
constructor.
*/
#include<iostream>
using namespace std;

class A 
{

public :
	
	A(int a, int b)
	{
	
	        cout<<"this addition of a and b is :"<<a + b <<endl;
			cout<<"this substraction of a and b is :"<<a - b <<endl;
			cout<<"this mutipliaction of a and b is :"<<a * b <<endl;
			cout<<"this devision of a and b is :"<<a / b <<endl;
    }
};
			int main()
			{
				A(30, 20);
			}
			
	
	