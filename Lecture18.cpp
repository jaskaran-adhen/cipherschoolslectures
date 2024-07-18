#include <iostream>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a=b;
    b=temp;
    cout<<" swapping "<<a <<" "<<b;
    return;
}
int main(){
    int a,b;
    a=356;
    b=30;

    swap(a,b);
    cout<<"after swapping are"<<a <<" "<<b;
    
    return 0;


}