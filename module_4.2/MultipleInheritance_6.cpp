/*
Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance) 
*/

#include <iostream>
using namespace std;

class person
{
public:
    void name(string name)
    {
        cout << "The member name is :" << name << endl;
    }
    void age(int a)
    {
        cout << "The age of member is :" << a << endl;
    }
};
class student
{
public:
    void per(int b)
    {
        cout << "The student percentage is :%" << b << endl;
    }
};
class teacher:public person,public student
{
public:
    void salary(int c)
    {
        cout << "The teacher salary is :" << c << endl;
    }
};
int main(){
    teacher obj;
    obj.name("khushi");
    obj.age(20);
    obj.per(85);
    obj.salary(50000);

}