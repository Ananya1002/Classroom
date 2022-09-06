#include<iostream>
using namespace std;

class Node
{
	public:
	int data;
	Node* next;
	Node(int dat)
	{
		data= dat;
		next=NULL;
	}	
};

void display(Node*& last)
{
	Node* temp=last;
	cout<<"The elements are:\n";
	do
	{
		temp=temp->next;
		cout<<temp->data<<" ";
	}
	while(temp!=last);
	cout<<endl;
}

void front(Node *& last, int dat)
{
	Node *n=new Node(dat);
	
	n->next=last->next;
	last->next=n;
}

void end(Node*& last, int dat)
{
	Node *n=new Node(dat);
	n->next=last->next;
	last->next=n;
	last=n;
}

void insert(Node*& last, int dat, int Node_val)
{
	Node* n= new Node(dat);
	Node * temp=last->next;
	while(temp->data!=Node_val)
	{
		temp=temp->next;
	}
	n->next=temp->next;
	temp->next=n;
}

int main()
{
	Node* last=new Node(3);
	last->next=last;
	front(last,2);
	front(last,1);
	cout<<"After inserting at the beginning,";
	display(last);
	
	end(last,4);
	end(last,5);
	cout<<"After inserting at the end,";
	display(last);
	
	insert(last,6,2);
	insert(last,7,4);
	cout<<"After inserting at a specified node value";
	display(last);
	return 0;
}