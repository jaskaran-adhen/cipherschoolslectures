#include <iostream>
using namespace std;

void myFunction() {
  cout << "I just";
}

int add(int a,int b){
	return a + b;
}
int main() {
  myFunction();
  return 0;



	int num1=6;
	int num2=3;
	int sum=add(num1,num2);
	cout<<"Sum is"<<sum<<endl;
	return 0;
}