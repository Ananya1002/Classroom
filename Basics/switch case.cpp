#include <iostream>
using namespace std;

int main()
{
    int marks;
	cout<<"Enter the marks ";
	cin>> marks;
	marks=marks/10;
	switch(marks)
	{
		case (10):
		{
			cout<<"A";
			break;
		}
		case (9):
			cout<<"B";
			break;
		case (8):
			cout<<"C";
			break;
		case 7:
			cout<<"D"<<endl;
			break;
		default:
			cout<<"Fail";
	}
	return 0;
}
