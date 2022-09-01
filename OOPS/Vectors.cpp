#include<iostream>
using namespace std;

void display(vector<int> &V){
	cout<<"Vector is:"<<endl;
	for(i=0;i<size();i++){
		cout<<vec[i]<<"";
	}
	cout<<endl;
}

int main(){
	vector<int> vec;
	int size,element,i;
	cout<<"Enter the size of vector: "<<endl;
	cin>>size;
	for(i=0;i<size;i++){	
	cout<<"Enter "<<i<<"the elements of vector: "<<endl;
	cin>>element;
	vec.push_back(element);
   }
   vec.pop_back();
   vector<int>:: iterator abc;
   display(vec);
   return 0;
}
