#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,i,j,sum=0;
	int arr[10];
	cout<<"size: ";
	cin>>n;
	cout<<"Elements: ";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n;i++){
		sum=+sum+arr[i];
		
	}cout<<"Sum is: "<<sum;
	
}
