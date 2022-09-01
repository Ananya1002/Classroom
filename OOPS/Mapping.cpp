
#include<iostream>
#include<map>
using namespace std;

int main(){
	map<string,int>Student_ID;
	Student_ID["ABC"]=1;
	Student_ID["DEF"]=2;
	Student_ID["ASD"]=3;
	Student_ID["TYU"]=4;
	Student_ID["UIO"]=5;
	
	Student_ID.insert({{"DFG",6},{"ASR",7}});
	map<string,int>::iterator it;
	for(it=Student_ID.begin();it!=Student_ID.end();it++)
	{
		cout<<(*it).first;//for name
		cout<<(*it).second<<endl; //for roll.numner
	}
	return 0;
}

