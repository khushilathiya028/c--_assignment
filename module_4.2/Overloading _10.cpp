// Write a program to concatenate the two strings using Operator Overloading 

#include <iostream>
#include <string.h>
using namespace std;

class A
{
public:
    char str[20];
    void value()
    {
        cout << "Enter a string name :";
        cin >> str;
    }
    void print()
    {

        cout << "The string is :" << str;
    }
    A operator+(A bb)
    {
        A cc;
        strcat(str, bb.str);
        strcpy(cc.str, str);
        return cc;
    }
};
int main()
{
    A aa;
    A bb;
    A cc;
    aa.value();
    bb.value();
    cc = aa + bb;
    cc.print();
}
