#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int arr[10],i;
	int sum=0;
	
	for(i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<10;i++)
	{
		if(arr[i]%2 !=0)
		sum=sum+arr[i];
	}
	std::cout<<"Sum of even numbers is= "<<sum;
}

