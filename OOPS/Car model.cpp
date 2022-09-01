#include <iostream>
#include <bits/stdc++.h>
using namespace std;


long long searchValue(map <string,vector <int>> m,string name){
    long long cost=m[name][1];
    int units =m[name][0];
    
    return cost*1LL*units;
}

int main()
{
    map <string,vector <int>> m;
    cout<<"Enter 11 to stop input"<<endl;
    while(true){
        string name;
        int sold;
        int value;
        cin>>name;
        if(name=="11"){
            break;
        }
        cin>>sold;
        cin>>value;
        m[name].push_back(sold);
        m[name].push_back(value);
    }
    string name;
    cout<<"Enter name of car to find";
    cin>>name;
    cout<<name<<endl;
    cout<<searchValue(m,name);

    return 0;
}