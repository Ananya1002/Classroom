#include <iostream>
using namespace std;

class matrix{
	int i,j;
	int A[2][2];
	public:
		void input(){
			cout<<"Elements: "<<endl;
			for(i=1;i<=2;i++){
				for(j=1;j<=2;j++)
				{
					//cout<<"A["<<i<<"]["<<j<<"]"<<endl;
					cin>>A[i][j];
				}
			}
		}
		void display(){
			cout<<"Final mat: "<<endl;;
			for(i=1;i<=2;i++){
				for(j=1;j<=2;j++){
					cout<<"-"<<A[i][j]<<" ";
				}
				cout<<endl;
		}
	//	matrix operator -(){
	//w	}
}};
int main(){
	matrix A;
	A.input();
	A.display();
}
