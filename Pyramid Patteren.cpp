#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"Enter the number: ";
	int n;
	cin>>n;
	for(int i=0;i<=n;i++)
	  {for(int j=1;j<=n-i;j++){
	  	cout<<" ";
	  }
	  for(int k=0;k<=i;k++){
	  
	  cout<<"*";
	  }
	  for(int a=0;a<i;a++){
	  	cout<<"*";
	  }
	  cout<<"\n";
	}return 0;
}
