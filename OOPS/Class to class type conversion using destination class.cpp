#include<iostream>
using namespace std;
 class complex{ //source class
 	int real,img;
 	public:
 		complex(int r, int im)
 		{
 			real=r;
 			img=im;
		 }
		 int getReal(){
		 	return real;
		 }
		 int getImg(){
		 	return img;
		 }
		 void display(){
		 	cout<<"My complex number is: "<<real<<"+"<<img<<"i"<<endl;
		 }
 };
 class rectangle{
 	public:
 		int length,width;
 	    rectangle(int l, int b)
 	{
 		length=l;
 		width=b;
	 }
	 rectangle(complex c){
	 	length=c.getReal();
	 	width=c.getImg();
	 }
	 void print(){
	 	cout<<"Dimensions of rectangle is: "<<length<<" And "<<width<<endl;	 	
	 }

 };

 
 
 int main(){
 	complex C(11,12);
	rectangle A=C;
	C.display();
	A.print();
	return 0;
 }
