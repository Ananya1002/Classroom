#include<iostream>
using namespace std;

class Integer{
	int i;
	public:
		void display()
		{
			cout<<"The value of integer is: "<<i<<endl;	
		}
		Integer(int i){
			this->i=i; // defining the integer in class
		}
};
int main(){
	Integer A=100;
	A.display();
	return 0;
}
