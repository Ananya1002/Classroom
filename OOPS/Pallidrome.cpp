#include<iostream>
using namespace std;
class Node{
    public:
	int data;
	Node* next;
	Node(int a){
		data=a;
		next=NULL;
	}	
};
void addNode(Node *&head,int a){
	Node* n=new Node(a);
	if(head==NULL){
		head=n;
		return;
	}
	Node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
		
	}
	temp->next=n;
}
void display(Node* head){
	
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}
int power(int a,int b){
	if(b==0){
		return 1;
	}
	if(b==1){
		return a;
	}
	return a*power(a,b-1);
}
void palindrome(Node* &head,Node* &k){

    Node* temp=head;
    Node* j=k;
    
    while(temp!=NULL){
    	if(temp->data==j->data){
    		temp=temp->next;
    		j=j->next;
		}
		else{
			cout<<"linked list is not palindrome."<<endl;
			return;
		}
	}
	cout<<"Linked list is palindrome."<<endl;	
}

void front(Node *&head,int dat){
	Node *n=new Node(dat);
	if(head==NULL){
		head=n;
		return;

	}
	n->next=head;
	head=n;	
}
int main(){
	int n;
	cout<<"Enter the number of elements: "<<endl;
	cin>>n;
	
	Node* head=NULL;
	Node* k=NULL;
	
	cout<<"Enter the elements in the list: "<<endl;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		front(k,a);
		addNode(head,a);
	}
	palindrome(head,k);
	
	
}