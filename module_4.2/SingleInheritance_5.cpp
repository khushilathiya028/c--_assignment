/*
 Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)
*/

#include <iostream>
using namespace std;

class cricketer
{
public:
    int totalrun;
    float avgrun;
    int bestper;
};
class bastman : public cricketer
{
public:
    void print()
    {
        cout << "bastman total run is : " << totalrun << endl;
        cout << "bastman average run is :" << avgrun << endl;
        cout << "bastman best performance is :" << bestper << endl;
    }
};
int main()
{

    bastman obj;
    obj.totalrun = 1250;
    obj.avgrun = 65.20;
    obj.bestper = 110;
    obj.print();
}