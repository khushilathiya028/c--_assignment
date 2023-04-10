// Write a program of to sort the array using templates

#include <iostream>
using namespace std;

template <class T>

void sort(T arr[], T size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                T c;
                c = arr[i];
                arr[i] = arr[j];
                arr[j] = c;
            }
        }
    }
}
int main()
{
    int N = 5;
    int a[N];

    cout << "Enter the array value:" << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    sort(a, N);
    cout << "after sorting they are :" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << a[i];
        cout << " ,";
    }
    return 0;
}


