#include <iostream>
#include <bits/stdc++.h>
using namespace std;

list <pair<string,int>> phone_list;

class student{
    public: 
    string name;
    int roll;
    
    student(){
        cin>>name;
        cin>>roll;
        phone_list.push_back({name,roll});
    }
};


string searchName(int roll){
    for(auto a:phone_list){
        if(a.second==roll){
            return a.first;
        }
    }
    return "Roll Number Invalid";
}

int searchRoll(string name){
    for(auto a:phone_list){
        if(a.first==name){
            return a.second;
        }
    }
    return -1;
}

int main()
{
    student a,b,c,d,e;
    
    cout<<searchName(4)<<endl;
    cout<<searchRoll("seema")<<endl;

    return 0;
}