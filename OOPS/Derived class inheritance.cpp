#include<iostream>
using namespace std;

class base{
	public:
		void display(){
			cout<<"Base class";
		}
};
class dervied{
	public:
		void display(){
			cout<<"Dervied class";
		}
};
int main(){
	dervied base1;
	dervied* base2= &base1;
	base2->display();
	return 0;
}
