#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	char op;
	float num1,num2;
	cin>>num1>>num2;
	cout<<"Enter operator: ";
	cin>>op;
	switch(op)
	{
		case'+':
			cout<<num1<<"+"<<num2<<"="<<num1+num2;
			break;
		case'-':
			cout<<num1<<"-"<<num2<<"="<<num1-num2;
			break;
		default:
			cout<<"Error";
			break;
	}return 0;
}
