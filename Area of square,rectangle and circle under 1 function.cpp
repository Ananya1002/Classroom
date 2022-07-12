#include<bits/stdc++.h>
#include <iostream>
#include<stdio.h>
using namespace std;

float area(char a,int x,int y)
{
	if (a=='s');
	    return (x*x);
	else if (a=='r');
		return (x*y);
	else (a=='c');
		return (3.14*x*x);
}
int main()
{
	cout<<"Calculate area of square";
	area(s,2);
	cout<<"Calculate area of rectangle";
	area(r,2,3);
	cout<<"Calculate area of circle";
	area(c,5);
}
