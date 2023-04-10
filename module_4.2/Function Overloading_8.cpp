/*
Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading
*/
#include<iostream>
using namespace std;

class function
{

public :
      void fun(int a, int b, int c, int d,int e)
      {
      	cout<<"the addition of a and b and c and d and e is : "<<a + b + c + d 
		  + e <<endl;
	  }
	  
	  void fun(int a, int b, int c, int d)
	  {
	  	cout<<"the subtraction of a and b and c and d is : "<<a - b - c - d <<endl;
	  }
	   
	   void fun(int a, int b, int c)
	   {
	   	cout<<"the Multiplication of a and b and c is : "<<a * b * c<<endl;
	   }
	   void fun(int a, int b)
	   {
	   	cout<<"the Division of a and b is : "<<a / b <<endl;
	   }
};
 int main()
 {
 	function obj;
 	obj.fun(10, 20, 30, 40, 50);
 	obj.fun(20, 30, 40, 50);
 	obj.fun(30, 40, 50);
 	obj.fun(40, 50); 	
 }




       