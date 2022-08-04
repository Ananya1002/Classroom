#include<iostream>
using namespace std;
class integer{
	private:
	int x;
	int y;
	public:
	integer(int a,int b){
		x=a;
	    y=b; 
	}

void display(){
	cout<<"1st integer: "<<x<<endl;
	cout<<"2nd integer: "<<y<<endl;
}
};
int main(){
	integer I(2,8);//parameter contructor
	I.display();
	return 0;
}
