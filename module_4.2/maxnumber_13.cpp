/*
Write a program to find the max number from given two numbers using
friend function 
*/

#include<iostream>
using namespace std;

int main(){
	
	int a = 40;
	int b = 80;
    int max;
    
    if(a > b) 
	{
    	max = a;
	}
	else if(b > a)
	{
		max = b;
	}
	cout<<"entar the nember"<<max;
	
	return 0;
}