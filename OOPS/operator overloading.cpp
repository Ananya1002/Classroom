#include <iostream>
using namespace std;
class complex{
	public:
		int real,img;
		complex(){
			real=0;img=0;
		}
		complex(int r,int im){
			real=r;
			img=im;
		}
		void display(){
			cout<<real<<"+"<<img<<"i"<<endl;
		}
		complex operator -(){
			real= -real;
			img =-img;
			return complex(real,img);
		}
};
int main(){
	complex A(1,2), B(3,4),C;
	
	B.display();
		return 0;
}
