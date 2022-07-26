#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[10];
	int count=0;
	for(int i=0;i<n;i++){
		if(i%2!=0){
			cout<<i<<" ";
		}
		else{
			arr[count]=i;
			count++;
		}
	}
	for(int i=0;i<count;i++){
		cout<<arr[i]<<" ";
	}
}
