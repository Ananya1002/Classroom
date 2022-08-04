#include<iostream>
using namespace std;
class complex{
	private:
	int real;
	int img;
	public:
	complex(int a,int b){
		real=a;
	    img=b; 
	}

	void display(){
				cout<<real<<"+"<<img<<"i";
}
void add(complex A,complex B){
	real=A.real+B.real;
	img=A.img+B.img;
	//cout<<"Sum of no.: "<<real<<"+"<<img<<"i";
}
};
int main(){
	complex A(2,8),B(4,7),C(0,0);
	C.add(A,B);
	C.display();
}
