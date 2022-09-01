#include <iostream>
using namespace std;
class vector{
	public:
		int* arr;
		int size;
		
		vector(int ar){
			size=ar;
			arr=new int(size);
		}
		int dotProduct(vector& v){
			int d=0;
			for(int i=0;i<size;i++){
				d+=this->arr[i]*v.arr[i];
			}
			return d;
		}
};
int main(){
	vector v1(3),v2(3);
	cout<<"Enter elements of vector: ";
	cin>>v1.arr[0];
	cin>>v1.arr[1];
	cin>>v1.arr[2];
	
	cout<<"Enter elements of vector: ";
	cin>>v2.arr[0];
	cin>>v2.arr[1];
	cin>>v2.arr[2];
	
	cout<<"Dot Product of given vectors is: "<<v1.dotProduct(v2)<<endl;
	return 0;
}
