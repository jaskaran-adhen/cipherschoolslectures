#include <iostream>
using namespace std;

int main() {
    int a = 8;
    int b= 88;
    
    int *ptr1 = &a;
    int *ptr2 = &b;

    int result;

    int *ptrResult = &result;

    *ptrResult = *ptr1 + *ptr2;

    cout << "sum " << *ptr1 << " and " << *ptr2 << " is " << *ptrResult << "." << endl;

    return 0;
}
