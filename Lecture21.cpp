#include<iostream>
using namespace std;
int main (){
	int a=5;
	cout<<"address of a "<<&a;
	return 0;	
	string name="Mumbai";
	string*ptr=&name;
	cout<<ptr<<"\n"<<&name;
	return 0;
}