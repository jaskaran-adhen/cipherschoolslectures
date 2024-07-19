
#include<iostream>
using namespace std;

class Queue{
	public:
		int queue[1000];
		int max_capacity;
		int size;
		int front,rear;
		
		Queue(){
			this->front = 0;
			this->rear = -1;
			this->max_capacity = 1000;
			this->size = 0;
		}
		
		void enqueue(int data){
			if(size == max_capacity){
				cout<<"been reached";
				return;
			}
			rear = (rear+1)%max_capacity;
			queue[rear] = data;
			size++;
		}
		
		void dequeue(){
			if(size == 0){
				cout<<"to dequeue"<<endl;
			}
			cout<<"dequeued is"<<queue[front]<<endl;
			front++;
			size--;
		}
		
		void peekqueue(){
			cout<<"front of queue is "<<queue[front]<<endl;
		}
		
		void sizeofqueue(){
			cout<<"the queue currently has "<<size<<" elements in it"<<endl;
		}
};

int main(){
	Queue q;
	q.enqueue(5);
	q.enqueue(6);
	q.enqueue(7);
	q.enqueue(8);
	q.enqueue(1);
    
	q.dequeue();
	q.peekqueue();
	return 0;
}
