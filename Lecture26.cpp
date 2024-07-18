#include<iostream>
using namespace std;

int main(){
	string name;  
	cin>>name;
	cout<<name;
	
	
    char name[1000];
    cout<<"Enter your name";
    int i=0;
    while(1){
    	cin>>name[i];
    	if(name[i] == '#'){
    		break;
		}
    	i++;  
	}
    
    
	//    for(int i=0;i<6;i++){
	//    	cin>>name[i];
	//	}
	//	cout<<"name is: ";
	//	for(int i=0;i<7;i++){
	//    	cout<<name[i];
	//	}
	i=0; 
    while(name[i] != '#'){
    	cout<<name[i];
    	i++;
	}
	return 0;
}