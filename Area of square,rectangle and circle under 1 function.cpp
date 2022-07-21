#include<bits/stdc++.h>
#include <iostream>
#include<stdio.h>
using namespace std;

int main(){
	int area(int);
	int area(int,int);
	float area(float);
	int s,l,b,r;
	cout<<"Side of sqaure: ";
	cin>>s;
	cout<<"Length and breadth of rectangle: ";
	cin>>l>>b;
	cout<<"Radius of circle: ";
	cin>>r;
	cout<<"Area of square= "<<area(s)<<endl;
	cout<<"Area of rectangle= "<<area(l,b)<<endl;
	cout<<"Area of circle= "<<area(r)<<endl;
}
int area(int s){
	return(s*s);
}
int area(int l,int b){
	return(l*b);
}
float area(float r){
	return(3.14*r*r);
}

