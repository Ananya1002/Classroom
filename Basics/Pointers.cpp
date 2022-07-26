#include<bits/stdc++.h>
#include <iostream>
#include<stdio.h>
using namespace std;
int x;
void Q(int z)
{
	z=z+x;
	cout<<z<<endl;
}
void P(int *y)
{
	int x= *y+2;
	Q(x);
	*y=x-1;
	cout<<x<<endl;
}
main()
{
	x=5;
	P(&x);
	cout<<x<<endl;
}
