//circular linked list
#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node *next;
	Node(int dat){
	  data=dat;
	  next=NULL;
	}
};
void front(Node *&last,int dat){
	Node *n=new Node(dat);
	n->next=last->next;
	last->next=n;
}
void display(Node *&last){
	Node *temp=last;
	cout<<"the elements are:"<<endl;
	do{
		temp=temp->next;
		cout<<temp->data<<"->";
	}
		while(temp!=last);
		cout<<endl;
}
int main(){
	Node *last=new Node(3);
	last->next=last;
	front(last,2);
	display(last);
	front(last,1);
	display(last);
	return 0;
}