#include<iostream>
using namespace std;
void divide(int x,int y,int z){
		if((x-y)!=0){
			z=z/(x-y);
			cout<<z<<endl;
		}
		else throw (x);
	}
int main(){
	int x,y,z;
	cout<<"Enter the Numbers"<<endl;
	cin>>x>>y>>z;
	try{
		divide(x,y,z);
	}
	
//	try{
//		if(y!=0){
//			cout<<x/y<<endl;
//		}
//		else{
//			throw (x);
//		}
//	}
	catch(char c){
		cout<<"Input is invalid . Please reconisder";
	}
	catch(int c){
		cout<<"Waste of time"<<endl;
	}
	return 0;
}

