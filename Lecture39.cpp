#include <iostream>
using namespace std;
int main() {
    int num 
    int a[num];
    int i, j;
    cout << "Enter ";
    for (i = 0; i < num; i++) {
        cin >> a[i];
    }
    int temp;
    for (j = 0; j < num; j++) {
        for (i = 0; i < 10 - j - 1; i++) {  
            if (a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
            }
        }
    }
    cout << "Sorted array";
    for (i = 0; i < num; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
