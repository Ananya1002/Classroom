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
	base base1;
	base* base2= &base1;
	base2->display();
	return 0;
}
