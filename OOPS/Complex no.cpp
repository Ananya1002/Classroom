#include <iostream>
using namespace std;

class complex{
	public:
	int real;
	int img;
	void display(complex X){
		cout<<X.real<<"+"<<X.img<<"i"<<endl;
	}
};
int main(){
	complex A,B;
	cout<<"Enter real part: ";
	cin>>A.real;
	cout<<"Enter img part:";
	cin>>A.img;
	//cout<<A.real<<"+"<<A.img<<"i";
	cout<<"Enter real part: ";
	cin>>B.real;
	cout<<"Enter img part:";
	cin>>B.img;
	
	A.display(A);
	B.display(B);
	return 0;
}
