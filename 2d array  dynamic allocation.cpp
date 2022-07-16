
#include<iostream>
using namespace std;
int main(){
	int **p,r,c;
	cout<<"Enter the size of rows and coloumns= ";
	cin>>r>>c;
	p=new int *[r];
	for(int i=0;i<r;i++){
		p[i]=new int[c];
	}
	cout<<"Enter the elements of array ";
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>p[i][j];
	
	cout<<"Enter the elements of array ";
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<p[i][j]<<" ";
		}cout<<endl;
	}return 0;
	}}}

