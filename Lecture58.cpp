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
	cout<<"Address "<<node->next<<endl;
}

void printLinkedList(node* &head){
	if(head == NULL){
	   cout<<" empty"<<endl;	
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

void insertatmiddleafterwhichelement(node* &head, int location, int data){
	node* temp = new node(data);
	node* var = head;
	
	while(var->data != location){
		var = var->next;
		
		if(var == NULL){
			cout<<"The location doesn't exist, check the location again...";
		}
	}
	temp->next = var->next;
	var->next = temp;
}

int main(){
	node* head=NULL;
    insertatstart(head,2);
    insertatend(head,9);
	insertatend(head,10);
	printLinkedList(head);
	insertatmiddleafterwhichelement(head,3,);
	insertatmiddleafterwhichelement(head,5,6);
	
	printLinkedList(head);
	
	insertatmiddleafterwhichelement(head,105,106);
	return 0;
}
