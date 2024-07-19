#include<iostream>
using namespace std;
int main(){
	string text;
	text = "sentence";
	int freq[26]; 
	
	int i;
	for(i=0;i<26;i++) freq[i]=0;
	
	for(i=0;i<text.length();i++){
		if(text[i] != ' '){
			freq[text[i]-'a']++;
		}
	}
	
	char temp;
	int max;
	for(i=0,temp='a',max=0;i<26;i++){
		cout<<"the char"<<temp<<" is "<<freq[i]<<endl;
		temp++;
		
		if(freq[i] > max) max=freq[i];
	}
	
	cout<<"The max"<<max;
	return 0;
}