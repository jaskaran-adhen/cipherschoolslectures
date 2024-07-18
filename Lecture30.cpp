#include<iostream>
using namespace std;

class Student{
	public:
		string name;
		int attendance;
		float total_marks;
		
		void calculate_percentage(){
			cout<<total_marks<<"%";
		}
};

class bank_client{
	private:
		int credit_no;
		int cvv;
		string password;
	
	public:
		string name;
		string user_name;
		
		void set_credit_card_no(int number){
			this->credit_no = number;
			cout<<"the address of instance is "<<this<<endl;
		}
		
		void get_credit_card_no(){
			cout<<"credit card number is "<<credit_no<<endl;
		}	
};

int main(){

	bank_client a,b,c;

	a.set_credit_card_no(1221991);
	a.get_credit_card_no();
	
	cout<<"the address of instance is "<<&a;
	
	return 0;
}