#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<int> a;
	a.push(33);
	a.push(64);
	a.push(44);
	
	cout<<a.top();
	a.pop();
    
	cout<<a.top();
}