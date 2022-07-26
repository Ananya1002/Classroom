#include<bits/stdc++.h>
#include <iostream>
#include<stdio.h>

using namespace std;
int main(){
	int n;
	cout<<"Enter n: ";
	cin>>n;
	int sum_odd=0;
	int sum_even=0;
	cout<<"Enter array: ";
	int arr[n];
	for( int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		if(arr[i]%2!=0){
		
		sum_odd=sum_odd+arr[i];}
		else{
			sum_even=sum_even+arr[i];
		}
}
	cout<<"Sum is"<<sum_odd<<endl;
	cout<<"Sum is"<<sum_even<<endl;

}
