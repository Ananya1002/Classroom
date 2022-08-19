#include<iostream>
using namespace std;

class music{
	public:
		virtual void sing()=0;
};
class music_device:public music{
	public:
		void sing(){
			cout<<"I am music device"<<endl;
		}
};
class music_player{
	public:
		void sing(){
			cout<<"I am music player"<<endl;
		}x
};
int main(){
	music_device mc;
	music_player mp;
	mc.sing();
	mp.sing();
	music *m;
	m=&mc;
	m->sing();
	return 0; 
}
