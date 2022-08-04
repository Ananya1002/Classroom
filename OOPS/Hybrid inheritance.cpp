#include<iostream>
#include<string>
using namespace std;
class university
{
	public:
	int id;
	string name;
	university(){}
	
	university (int inputID)
	{
		id=inputID;
	}
	void disp1(){
		if(id==1){
			name="XYZ";
		}
		else if(id==2){
			name="ABC";
		}
		else if(id==3){
			name="DEF";
		}else if(id==4){
			name="GHI";
		}
		else if(id==5){
			name="JHK";
		}
		else if(id==6){
			name="LMN";
		}
		else{
			cout<<"Inlut Valid ID"<<endl;
		}
		if(id<=6){cout<<"Person ID No.: "<<id<<endl<<"Person Name:"<<name<<endl;
		}
	}
};
class student: public university{
	public:
	student(){}
	int semester =5;
	student(int inputID){
		student :: id =inputID;
		
	}
	void disp2(){
		if(id==2 ||id==3){
			disp1();
			cout<<"Semester : "<<semester<<endl;
		}
		else{
			cout<<"Person is not a student ."<<endl;
		}
	}
};
class faculty: public university{
	public:
	faculty(){}
	string designation="HR";
	facultyty(int inputID){
		id =inputID;
		
	}
	void disp3(){
		if(id==1 ||id==5){
			disp1();
			cout<<"Designation : "<<designation<<endl;
		}
		else{
			cout<<"Person is not a facility ."<<endl;
		}
	}
};
class football:public student,public faculty{
	public:
	football(int inputID){
	student :: id =inputID;
		
	}
	void disp4(){
		
		if(student :: id==1 ||student :: id==5){
			disp3();
			cout<<"Designation : "<<designation<<endl;
		}
		else if(){
			if(student :: id==2 ||student :: id==3){
				disp2();
				cout<<"Semester : "<<semester<<endl;
			}
		else{
			cout<<"It is not a footballer ."
		}	
	}
	}
	
};
int main(){
	int i,j,k;
	cout<<"Enter the id : ";
	cin>>i;
	cout<<"Enter the id : ";
	cin>>j;
	cout<<"Enter the id : ";
	cin>>k;
	university U(i);
	U.disp1();
	student S(j);
	S.disp2();
	facility I(k);
	I.disp3();
	A.disp3(2);
	return 0;
}
