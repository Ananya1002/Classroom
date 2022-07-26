#include <iostream>
#include<stdio.h>
using namespace std;
 
int main()
{
	int arr[5],i,sum=0,percentage=0,average=0;
	cout<<"Enter the marks of C ";
	cin>>arr[0];
	cout<<"Enter the marks of C++ ";
	cin>>arr[1];
	cout<<"Enter the marks of Java ";
	cin>>arr[2];
	cout<<"Enter the marks of DS ";
	cin>>arr[3];
	cout<<"Enter the marks of OS ";
	cin>>arr[4];
	
	for(i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	average=sum%5;
	percentage=(float(sum/500)*100);
	cout<<"Sum:"<<sum<<endl;
	cout<<"Average: "<<average<<endl;
	cout<<"Percentage: "<<percentage<<endl;
}
