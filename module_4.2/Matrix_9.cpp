//Write a Program of Two 1D Matrix Addition using Operator Overloading 

#include<iostream>
using namespace std;

#include <iostream>

using namespace std;

class Matrix {
private:
    int* arr;
    int size;
public:
    Matrix(int n) {
        size = n;
        arr = new int[size];
    }

    void input() {
        cout << "Enter " << size << " elements of the matrix: ";
        for(int i=0; i<size; i++) {
            cin >> arr[i];
        }
    }

    void display() {
        cout << "Matrix elements: ";
        for(int i=0; i<size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    Matrix operator+(Matrix& m) {
        Matrix result(size);
        for(int i=0; i<size; i++) {
            result.arr[i] = arr[i] + m.arr[i];
        }
        return result;
     }

    ~Matrix() {
        delete[] arr;
    }
};

int main() {
    int size;
    cout << "Enter the size of the matrices: ";
    cin >> size;

    Matrix m1(size), m2(size);
    m1.input();
    m2.input();

    Matrix result = m1 + m2;
   
    cout << "Matrix 1: ";
    m1.display();

    cout << "Matrix 2: ";
    m2.display();

    cout << "Matrix addition: ";
    result.display();

return 0;

}