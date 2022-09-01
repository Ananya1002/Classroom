#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node*next;
		
		Node(int dat){
			data=dat;
			next=NULL;
		}
};
void front(Node*&head,int dat){
	Node *n=new Node(dat);
	if(head==NULL){
		head=n;
		return;
	}
	n->next=head;
	head=n;
}
void end(Node*&head,int dat){
	Node*n=new Node(dat);
	if(head==NULL){
		head=n;
		return ;
	}
	Node*temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
}
void display(Node*n){
	while(n!=NULL){
		cout<<n->data<<" ";
		n=n->next;
	}
	cout<<endl;
}
int main(){
	Node*head=new Node(7);
	display(head);
	front(head,9);
	front(head,7);
	display(head);
	end(head,5);
	display(head);
	return 0;
}