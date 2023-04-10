/*
Write a program to find the multiplication values and the cubic values using
inline function 
*/

#include <iostream>

using namespace std;

inline int multiply(int a, int b) {
    return a * b;
}

 inline int cube(int x) {
    return x * x * x;
}

int main() {
    int num1 = 5, num2 = 10;
    int product = multiply(num1, num2);
    cout << "The product of " << num1 << " and " << num2 << " is: " << product << endl;

    int num3 = 3;
    int cubeValue = cube(num3);
    cout << "The cube of " << num3 << " is: " << cubeValue << endl;

return 0;
}