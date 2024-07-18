#include<iostream>
using namespace std;
int main(){
	int a[10];
	
	int i;
	for(i=0;i<=9;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<9;i++){
	    int leastindex=i;
		int j;
		for(j=i+1;j<10;j++){
			if(a[j]<a[leastindex]){
				least_indexzj;
			}
		}
		//swap

		int temp;
		temp = a[i];
		a[i] = a[leastindex];
		a[least_index] = temp; 	
	}
	
	cout<<"After sortin "<<endl;
	for(int i=0;i<10;i++){
		cout<<a[i]<<" ";
	}
}