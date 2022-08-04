#include<iostream>
using namespace std;
 class rectangle{
 	public:
 		int length,width;
 	    rectangle(int l, int b)
 	{
 		length=l;
 		width=b;
	 }
	 void print(){
	 	cout<<"Dimensions of rectangle is: "<<length<<" And "<<width<<endl;	 	
	 }

 };
 class complex{ //source class
 	int real,img;
 	public:
 		complex(int r, int im)
 		{
 			real=r;
 			img=im;
		 }
		 void display(){
		 	cout<<"My complex number is: "<<real<<"+"<<img<<"i"<<endl;
		 }
		  operator rectangle(){ //always call the operator in source class
	 	rectangle temp(real,img);
	 	return temp;
	 }
 };
 
 
 int main(){
 	complex C(11,12);
	rectangle A=C;
	C.display();
	A.print();
	return 0;
 }
