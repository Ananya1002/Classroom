#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"Enter the number";
	int n;
	cin>>n;
	for(int i=n;i>=1;i--)
	  {for(int j=1;j<=i;j++){
	  	cout<<i<<" ";
	  }
	  for(int k=0;k<=i;k++){
	  
	  cout<<" ";
	  }cout<<"\n";
	}return 0;
}
