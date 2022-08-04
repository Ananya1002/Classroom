#include<iostream>
using namespace std;
class Time{
	public:
		int hours,minutes;
	Time(){
		hours=0;
		minutes=0;
	}
	Time(int h, int m){
		hours =h;
		minutes=m;
	}
	void display()
	{
		cout<<"Time is: "<<hours<<":"<<minutes<<endl;
	}
	
	Time operator ++(){   //opertator overloading
	++minutes;
	if(minutes >=60){
		++hours;
		minutes-=60;
	}
	return Time(hours,minutes);
}
};
int main(){
	Time Time1(11,59),Time2(12,40);
	++Time1;
	Time1.display();
	++Time2;
	Time2.display();
	return 0;
	}
