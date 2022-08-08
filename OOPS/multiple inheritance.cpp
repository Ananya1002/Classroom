#include<iostream>
using namespace std;
class google{
    public:
	google(){}
	void print(){
		cout<<"Hi , i am google .how are you ?"<<endl;
	}
};
class alexa{
    public:
    
	alexa(){}
	void print(){
	cout<<"Hi , i am alexa .how are you ?"<<endl;
	}
};
class siri{
    public:
	siri(){}
	void print(){
	cout<<"Hi , i am siri .how are you ?"<<endl;
	}
};
class greeting :public alexa,public google,public siri{
	public:
		void print(){
		    alexa::print();
		}
};

int main(){
	//greeting G;
	//G.print();
	siri S;
	S.print();
	
	return 0;
}
