#include <bits/stdc++.h>
using namespace std;

string isPalindrome(string S)
{

	string P = S;


	reverse(P.begin(), P.end());


	if (S == P) {
	
		return "Yes";
	}
		else {
	
		return "No";
	}
}


int main()
{
	string S = "ABCDBA";
	cout << isPalindrome(S);

	return 0;
}
