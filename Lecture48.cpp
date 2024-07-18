
#include<iostream>
using namespace std;

void printMaxClassesAttend(int start[], int end[], int classid[]){
	cout<<"The maxxx "<<endl;
	cout<<classid[0];
	
	int i,end_attending=end[0];
	for(i=1;i<9;i++){
		if(start[i] >= end_attending){
			cout<<classid[i];
			end_attending = end[i];
		}
	}
}

int main(){
	int start[] = {1,2,5,6,34,2,4,24,24,4};
	int end[] = {4,5,5,25,2,2,82,5,4,24,5,5};
	int classid[] = {8,15,445,5,5,5,9};
	printMaxClassesAttend(start,end,classid);
	
	return 0;
}