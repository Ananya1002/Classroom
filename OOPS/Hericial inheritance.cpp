#include<iostream>
using namespace std;
class university{
	public:
		int id;
		string name;
		
		university(){
			
		}
		
	university(int inputID){
		id=inputID;
	}
	void displ(){
		if(id==1){
			name="ABC";
		}
		else if(id==2){
			name="ABC2";
		}
		else if(id==3){
			name="ABC3";
		}
		else if(id==4){
			name="ABC4";
		}
		else if(id==5){
			name="ABC5";
		}
		else{cout<<"Invalid ID "<<endl;
		}
		if(id<=5){
			cout<<"Persons ID: "<<id<<endl<<"Persons Name: "<<name<<endl;
		}
	}
};


class faculty:public university{
	public:
	string designation="Professor";
	faculty(int inputID){
		id=inputID;
	}
	void display(){
		if(id==1 || id==5){
			displ();
			cout<<"Designation is "<<designation<<endl;
		}
		else{
			cout<<"person is not a Faculty "<<endl;
		}
	}
};

int main(){
	faculty F(4);
	F.display();
	return 0;
}
