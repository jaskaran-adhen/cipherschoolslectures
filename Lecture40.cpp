
#include <iostream>
using namespace std;

int main(){
	cout<<"numbers";
    int num;
	int a[num];
	int i,j;
	for(i=0;i<num;i++){
		cin>>a[i];
	}
	int key;
	for(j=1;j<num;j++){
		key = a[j];
		i=j-1;
		
		while(a[i]>key && i>=0){
			a[i+1] = a[i];
			i--;
		}	
		a[i+1] = key;
	}
	
	for(i=0;i<num;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
