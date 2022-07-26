#include<bits/stdc++.h>
#include <iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

int power(int i,int n)
{
	if(i==0)
		return 1;
	
	if(i==1)
		return n;
	
	else
		return n*power(n,i-1);
	
}
int main(){
	int b,e,p;
	cin>>b>>e;
	p=power(b,e);
	cout<<p;
}
