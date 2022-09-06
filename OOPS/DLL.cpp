#include <iostream>
using namespace std;
class Node{
	public:
		int data;
		Node*next;
		Node*prev;
		Node(int dat){
			data=dat;
			next=NULL;
			prev=NULL;
		}
};
void display_head(Node*&head){
	Node*temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
void display_tail(Node*&last){
	Node*temp=last;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->prev;
	}
	cout<<endl;
}
void front(Node*&head, int dat){
	Node* n= new Node(dat);
	head->prev=n;
	n->next=head;
	head=n;
}
int main(){
	Node*head =new Node(3);
	Node*last=head;
	front(head,2);
	front(head,1);
	display_head(head);
	display_tail(last);
	return 0;
}