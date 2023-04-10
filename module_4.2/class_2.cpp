#include<iostream>
using namespace std;

class bank
{
public :
	int a;
	char b[10];
	char c[10];
	float d;
	
	void ac(int ACnumber, char ACname[10], char ACtype[10], float ACbalance)
	{
	a = ACnumber;
	b[10] = ACname[10];
	c[10] = ACtype[10];
	d = ACbalance;
}
	
void set(){
	cout<<"account number:"<<a<<endl;
	cout<<"account name:"<<b[10]<<endl;
	cout<<"account type:"<<c[10]<<endl;
	cout<<"account balance:"<<d<<endl;
     }
};
int main(){
	int a;
	char b[10];
	char c[10];
	float d;
	
	bank obj;
	cout<<"account number:";
	cin>>a;
	cout<<"account name:";
	cin>>b;
	cout<<"account type:";
	cin>>c;
	cout<<"account balance:";
	cin>>d;
	
	int e;
	cout<<"deposit amount:";
	cin>>e;
	d += e;
	
	cout<<"total balance:"<<d<<endl;
	
	int f;
	cout<<"withdraw amount:";
	cin>>f;
	d -= f;
	
	cout<<"account name:"<<b<<endl;
	cout<<"account balance:"<<d<<endl;
}




