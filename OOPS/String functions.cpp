#include<iostream>
#include <cstring>
#include<string>
using namespace std;
class greeting{
	public:		
		string  A="Hello",B="World",C;
		int len;
		void display(){
			C=A;
			cout<<"C says: "<<C<<endl;
			
			C=A+B;
			cout<<"C becomes: "<<C<<endl;
			
			len = C.size();
			cout<<"Length of C is now: "<<len<<endl;
		}
		
};
int main(){
	greeting j;
	j.display();
	return 0;
}
