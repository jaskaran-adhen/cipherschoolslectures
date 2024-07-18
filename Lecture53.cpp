#include<iostream>
using namespace std;

void display(int n, int arr[]){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void display2(int n, int *arr){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int a[10];
	
	cout<<"values "<<endl;
	
	cout<<"a"<<a<<endl;
	cout<<"a[0]"<<a<<endl;
	cout<<" a[1]"<<a<<endl;
	
	int n;
	cin>>n;
	int list[n];
	for(int i=0;i<n;i++){
		cin>>list[i];
	}
	display(n, list);
	display2(n, list);
	
	return 0;
}