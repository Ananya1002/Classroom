#include<iostream>
using namespace std;
class complex{
	private:
		int real;
		int img;
		public:
			void input(){
				cout<<"Enter real part: ";
				cin>>real;
				cout<<"Enter img: ";
				cin>>img;
			}
			void display(){
				cout<<"Complex number"<<real<<"+"<<img<<"i"<<endl;
			}
			void sum(complex A, complex B){
				cout<<"Sum of no. "<<A.real+B.real<<"+"<<A.img+B.img<<"i"<<endl;
			}
};
int main(){
	complex A,B;
	A.input();
	A.display();
	B.input();
	B.display();
	A.sum(A,B);
	//B.sum(A,B);
	}

