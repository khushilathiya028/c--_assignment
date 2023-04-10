/* 
Write a program to swap the two numbers using friend function without
using third variable
*/

#include <iostream>
using namespace std;

int main()
{

int a = 80;
int b = 90;

cout<<"value is a"<<a<<endl;
cout<<"value is b"<<b<<endl;

a = a + b;         // 80 = 80 + 90 = 170
b = a - b;        //  90 = 170 - 90 = 80
a = a - b;       //   170 = 170 - 80 = 90

cout<<"value is a"<<a<<endl;
cout<<"value is b"<<b<<endl;

return 0;
}