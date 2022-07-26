#include<bits/stdc++.h>
using namespace std;

int main(){
	cout<<"enter size : ";
	int n;
	cin>>n;
	cout<<"enter elements : ";
	int arr[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>arr[i][j];
		}
	}
	int largest = arr[0][0];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(arr[i][j]>largest){
				largest=arr[i][j];
			}
		}
	}
	cout<<"largest : "<<largest<<endl;
	return 0;
}
