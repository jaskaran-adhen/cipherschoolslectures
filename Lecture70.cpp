
#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* left;
		Node* right;
		Node(int data){
			this->data = data;
			this->left = NULL;
			this->right = NULL;
		}
};
void buildTree(Node*& root){
	int var;
	cin>>var;
	if(var == -1) return;
	root = new Node(var);
	buildTree(root->left);
	buildTree(root->right);
}
void printPreOrderTraversal(Node* root){
	if(root == NULL) return;
	cout<<root->data<<" ";
	printPreOrderTraversal(root->left);
	printPreOrderTraversal(root->right);
}

void printInOrderTraversal(Node* root){
	if(root == NULL) return;
	printInOrderTraversal(root->left);
	cout<<root->data<<" ";
	printInOrderTraversal(root->right);
}

void printPostOrderTraversal(Node* root){
	if(root == NULL) return;
	printPostOrderTraversal(root->left);
	printPostOrderTraversal(root->right);
	cout<<root->data<<" ";
}

int main(){
	Node* root;
	buildTree(root);
	cout<<"Preorder traversal: "<<endl;
	printPreOrderTraversal(root);
	cout<<endl;
	cout<<"Inorder traversal: "<<endl;
	printInOrderTraversal(root);
	cout<<endl;
	
	cout<<"Postorder traversal: "<<endl;
	printPostOrderTraversal(root);
	return 0;
}
