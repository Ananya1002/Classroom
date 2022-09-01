#include<iostream>
using namespace std;
template <class T1=int, class T2=char>
//or we can do as  template <class T1 class T2>
//                 void ABC<T1,T2>::display(){
//                                       }
class ABC{
	public:
		T1 data1;
		T2 data2;
		
		ABC(T1 x,T2 y){
			data1=x;
			data2=y;
		}
		void display(){
			cout<<"Data 1 is: "<<data1<<endl;
			cout<<"Data 2 is: "<<data2<<endl;
		}
};
int main(){
	ABC<int,char>a(2,'c');
	ABC<int,double>b(3,2.5);
	a.display();
	b.display();
	return 0;
}
