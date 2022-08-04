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
	operator int()
	{
		return i;//using operator function
		}	
};
int main(){
	Integer A=100;
	int y=A; //  calling operator int()
	cout<<"The value of y: "<<y<<endl; // there is no return type
	return 0;
}
