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
		cout<<temp->data<<" >>> ";
		temp = temp->next;
	}
}

int main(){
	node* head=NULL;
	printLinkedList(head);
	
	node* node1 = new node(3);
	head = node1;
	printLinkedList(head);
	cout<<endl;
	
	node* node2 = new node(5);
	node1->next = node2;
	printLinkedList(head);
	cout<<endl;
	
	
	//	printnode(node1);
	//	printnode(node2);
		
	//	node1->next = node2;  
	////	printnode(node1);
	////	cout<<endl<<node2<<endl;
	////	printnode(node2);
	//    printnode(node1);
	//    printnode(node1->next);   
	//    printnode(n
	
	return 0;
}
