#include<iostream>
using namespace std;
class complex{
	int real,img;
	public:
		complex(){
			real=0;
			img=0;
		}
		complex(int r, int i){
			real=r;
			img=i;
		}
		complex operator +(complex a){
			complex abc;
			abc.real=real+a.real;
			abc.img=img+a.img;
			return abc;
		}
complex operator ()(int a, int b, int c, int d){
	complex xyz;
	xyz.real=a+b+c;
	xyz.img=b+c+d;
	return xyz;
}
void display(){
	cout<<real<<"+"<<img<<"i"<<endl;
}
};
int main(){
complex A(2,3),B(3,4),C, D;
cout<<"1st complex number is: ";
A.display()	;
cout<<"2nd complex number is: ";
B.display();
C=A+B;
cout<<"Addition of complex number is";
C.display();
D=A(1,2,3,4);
cout<<"function overloading is";
D.display();

return 0;
}
