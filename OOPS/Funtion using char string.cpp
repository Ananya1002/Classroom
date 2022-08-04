#include<iostream>
#include <cstring>

using namespace std;
class greeting{
	public:
		char A[10]="Hello",B[10]="World",C[10];
		int len;
		void display(){
			strcpy(C,A); //copying A in C
			cout<<"C says: "<<C<<endl;
			
			
			strcat(A,B); //B is added to A
			cout<<"C becomes: "<<C<<endl;
			
			
			len=strlen(A);
			cout<<"Length of C is now: "<<len<<endl;
		}
		
};
int main(){
	greeting j;
	j.display();
	return 0;
}
