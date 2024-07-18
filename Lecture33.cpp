
#include<iostream>
using namespace std;

class student{ 
	public:
		string name;
		int mids;
		float ends;
		bool pre_abs;
		
		void calculate_marks(){ 
			
			total_marks = mids*0.5 + ends*0.75;
			
			cout<<"The marks of: "<<name<<" is "<<total_marks<<endl;
		}
		
		void totalMarksIncludingProject(int project_marks){
			cout<<mids+ends+project_marks;
		}
		
		void calculate_fail_probability(){
			if(ends <= 10){
				cout<<"yes year....";
			}
		}
};

class vehicle{
	public:
		string car_name;
		string tyre_name;
		int no_of_tyres;
		int no_of_seats;
		int no_of_miles_travelled;
		
		void distanceTravelledByCar(){
			cout<<no_of_miles_travelled;
		}
};

int main(){
	student a,b,c; 
	vehicle d,e,f; 
	a.name = "jass";
	a.mids = 30;
	a.ends = 92.2;
	a.pre_abs = 1;
	a.calculate_marks();
	a.totalMarksIncludingProject(10);
	
	d.car_name = "polo";
	d.no_of_seats=23;
	d.no_of_tyres=42;
	d.tyre_name="JK";
	
	return 0;
}