#include <iostream>
using namespace std;
void printhi(){
	cout<<"hi"<<endl;
}
int sum(int a,int b){
	int c;
	c=a+b;
	return c;
}
int main(){
	printhi();
	int a,b;
	a=4;
	b=6;
	int d;
	d=sum(a,b);
	cout<<"sum is equal "<<d;
	
	return 0;
}