#include <iostream>
using namespace std;
int main()
{
	int *p,n;
	cout<<"enter the size of array: ";
	cin>>n;
	p=new int[n];
	for (int i=0;i<n;i++){
		cin>>p[i];
	}
    cout<<"The elements of arraya are: ";
    for(int i=0;i<n;i++){
    	cout<<p[i]<<" ";
	}return 0;
}
