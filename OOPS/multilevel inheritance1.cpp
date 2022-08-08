#include<iostream>
using namespace std;
class FW{
	public:
		FW(){
			cout<<"It is four wheeler"<<endl;
		}
};
class car:public FW{
	public:
		car(){
			cout<<"its is a car";
		}
};

class  brand:public car{
	public:
		brand(){cout<<"this is car is made by Tata"<<endl;
		}
};

int main(){
	car B;
	return 0;
}
