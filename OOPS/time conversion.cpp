#include<iostream>
using namespace std;

int main()
{
	int x=100,y=40;
	float z=x/y;
	cout<<"x/y is: "<<z<<endl;
	float a=(float)x/y;
	cout<<"x/y is: "<<a<<endl;
	float b=(float)(x/y);
	cout<<"x/y is: "<<b<<endl;
	return 0;
}
