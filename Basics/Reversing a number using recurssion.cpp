#include<bits/stdc++.h>
#include <iostream>
#include<stdio.h>
using namespace std;

reverse(int n)

{

   if (n < 10) {
      cout<<n;
      return n;
   }

   else{
      cout<<n%10;
      reverse(n/10);
   }
}


int main()
{
   int n;
	cin>>n;
   reverse(n);
   return 0;
}
