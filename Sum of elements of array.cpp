#include<bits/stdc++.h>
#include <iostream>
#include<stdio.h>

using namespace std;
int main(){
	int arr[10];
	int sum=0;
	int n;
	cout<<"Enter n: ";
	cin>>n;
	cout<<"Enter the ements: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		sum=+sum+arr[i];}
		cout<<"Sum of elements is: "<<sum;
	}

