#include<iostream>
using namespace std;
void display(int x){
try{

	if(x==-1){
		throw x;
	}
	else if(x==0){
		throw 'x';
	}
	else if(x==1){
		throw 1.0;
	}
}
	catch(char c){
		cout<<"Input is invalid"<<endl;
	}
	catch(int d){
		cout<<"Bla bla"<<endl;
	}
	catch(double e){
		cout<<"Reconsideration"<<endl;
	}}
int main(){
	int x;
	display(-1);
	display(1);
	display(0);
	return 0;
}
