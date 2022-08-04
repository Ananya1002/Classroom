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

//SYNTAX
//class student:{{derived-class-name}}:{{visibility-mode}} {{base-class-name}}
//visibility can be public,protected,private(default).

class student:public university{
	public:
	int semester=5;
	student(int inputID){
		id=inputID;
	}
	void display(){
		if(id==1 || id==5){
			displ();
			cout<<"Semester is "<<semester<<endl;
		}
		else{
			cout<<"person is not a student "<<endl;
		}
	}
};

int main(){
//	university U(3);
//	U.displ();
	student S(2);
	S.display();
	return 0;
}
