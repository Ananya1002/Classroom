#include<iostream>
using namespace std;
template<class T>
T maxo(T x,T y){
	return(x>y)?x:y;
}
int main(){
	int x,y;
	cin>>x>>y;
	cout<<maxo(x,y);
	cout<<"Max of(3.1,3.2) is: "<<maxo(3.1,3.2)<<endl;
	return 0;
}
