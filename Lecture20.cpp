#include <iostream>
using namespace std;
int main(){
	int a=10;
	float b=22;
	long long c=33;
	cout<<"int is "<<&(a)<<"address of float is "<<&(b);
    cout<<"ddress of long long  is "<<&(c);
	return 0;
}