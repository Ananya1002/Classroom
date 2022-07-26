#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<n;i++){
	int space=i;
	while(space-->0){
		cout<<" ";
		for(int j=i;j<2*i-1;j++)
			cout<<j;
		for(int j=2*i-1;j>i-1;j--)
			cout<<j;
			cout<<endl;
		}
	}
}
	

