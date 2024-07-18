#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node* next; 
		node(int data_input){
			this->data = data_input;
			this->next = NULL;
		}
};

void printnode(node* &node){
	cout<<"value "<<node->data<<endl;
	cout<<"address "<<node->next<<endl;
}

void printLinkedList(node* &head){
	if(head == NULL){
	   cout<<"empty"<<endl;	
	   return;
	}
	node* temp;
	temp = head;
	while(temp != NULL){
		cout<<temp->data<<"  --> ";
		temp = temp->next;
	}
	cout<<endl;
}

void insertatstart(node* &head, int data){
	node *temp = new node(data);
	if(head == NULL){
		head = temp;
		return;
	}
	temp->next = head;  
	head = temp;
}

void insertatend(node* &head, int data){
	node *temp = new node(data);
	if(head == NULL){
		head = temp;
		return;
	}
	node *end;
	end = head;
	while(end->next != NULL){
		end = end->next;
	}
	end->next = temp;
}

int main(){
	node* head=NULL;
	
	insertatend(head,77);
	insertatend(head,4);
	insertatend(head,55);
    insertatstart(head,4);
  
	
	printLinkedList(head);
	return 0;
}

