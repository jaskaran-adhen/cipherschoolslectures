#include<iostream>
using namespace std;
int main(){
	string name="rayaa";
	string*ptr=&name;
	cout<<ptr<<"     "<<name<<endl;
	*ptr="delhi";
	cout<<*ptr<<"    "<<name;
	return 0;
}