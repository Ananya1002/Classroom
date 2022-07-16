#include<bits/stdc++.h>
#include <iostream>
#include<stdio.h>
using namespace std;

fact(int n)
{
	if(n==0||n==1)
	return 1;
	else;
	return (n*fact(n-1));
}
int main()
{
	int f,n;
	cin >>n;
	f=fact(n);
	cout<<"Factorial of n is: "<<f;
	return 0;
}
