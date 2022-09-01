#include<iostream>
#include<list>
using namespace std;

display(list<int> &L){
	cout<<"Elements of the list are: "<<endl;
	list<int>::iterator it;
	for(it=L.begin();it!=L.end();it++){
		cout<< *it<<" ";
	}
	cout<<endl;
}

int main(){
	list<int> L;
	list<int> M;
	int size,element;
	cout<<"Enter the size of list:"<<endl;
	cin>>size;
	for(int i=0;i<size;i++){
		cout<<"Enter "<<i+1<<"the elements of list: ";
		cin>>element;
		L.push_back(element);
	}
	display(L);
	
	list<int>::iterator ir;
	ir=M.begin();
	*ir=9;cout<<"Elements of the list are: "<<endl;
	ir++;
	*ir=5;
	ir++;
	*ir=7;
	
	L.sort();
	M.sort();
	display(M);
//	L.pop_back();
	L.pop_front();
	//L.remove(2);
	display(L);
//	L.merge(M);
	return 0;
	}
