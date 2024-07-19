
#include<iostream>
using namespace std;

class stack{
	public:
		int* arr;
		int size;
		int top;
		
		stack(int size){
			this->size = size;
			arr = new int[size];
			top = -1;
		}
		
		void push(int element){
			if(size-top > 1){
				top++;
				arr[top] = element;	
			}
			else{
				cout<<" already full"<<endl;
			}
		}
		void pop(){
			if(top >= 0){
				top--;
			}
			else{
				cout<<"elements to pop"<<endl;
			}
		}
		void peek(){
			if(top<0) cout<<"in stack to peek"<<endl;
			else{
				cout<<"top element is: "<<arr[top]<<endl;
			}
		}
		bool isEmpty(){
			if(top<0)
			{
				cout<<"is empty"<<endl;
				return true;	
			 } 
			else{
				return false;
			}
		}	
};

int main(){
	stack new_stack(5);
	
	new_stack.peek();
	new_stack.push(5);
	new_stack.peek();
	new_stack.peek();
	new_stack.pop();
	new_stack.pop();
	new_stack.pop();
	new_stack.peek();
	return 0;
}
