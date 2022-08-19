#include<iostream>
using namespace std;
 void divide(int x,int y,int z){
 	try{
 		z=z/(x-y);
 		if((x-y)!=0)
 		cout<<z<<endl;
 		else 
 		throw(x-y);
	 }
	 catch (int p){
	 	cout<<"Funcition catch"<<endl;
	 	throw;
	 }
 }
 int main(){
 	int x,y,z;
 	cin>>x;
 	cin>>y;
 	cin>>z;
 	try{
 		divide(x,y,z);
	 }
	 catch(int p){
	 	cout<<"Main catch"<<endl;
	 }
	 return 0;
	 
 }
 
