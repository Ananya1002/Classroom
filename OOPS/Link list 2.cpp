#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		Node(int dat){
			data=dat;
			next=NULL;
		}
};

void display(Node* n){
	cout << "The elements are: "<<endl;
	while(n!=NULL){
		cout<<n->data<<"->";
		n=n->next;
	}
	cout <<"NULL"<< endl;
}
//insertingatfront
void front(Node* &head,int dat){
	Node *n = new Node(dat);
	if (head==NULL){
		head=n;
		return;
	}
	n->next=head;
	head=n;
}
//insertingatback
void back(Node* &head,int dat){
	Node *n = new Node(dat);
//	if(head==NULL){
//		head=n;
//		return;
//	}
Node *temp = head;
 while(temp->next!=NULL){
 	temp=temp->next;
 }
 temp->next=n;
}
//insertingatspecificposition
void mid(Node* &head,int node_val,int dat){
	Node *n = new Node(dat);
	if(head==NULL){
		head=n;
		return;
	}
   Node* temp= head;
   while(temp->data!=node_val){
   	temp=temp->next;
   if(temp==NULL){
   	return;
   }
}
   n->next=temp->next;
   temp->next=n;
   
}
int main(){
	Node *head=new Node(3);
	display(head);
	front(head,7);
	front(head,8);
	display(head);
	back(head,10);
	display(head);
	mid(head,7,20);
	display(head);
	mid(head,2,12);
	display(head);
	return 0;
	
}