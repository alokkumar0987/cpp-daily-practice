#include<iostream>
using namespace std; 

int main() {
    cout<<" enter the number :" << " ";
    int n;
    cin>> n;
    cout<< " Table of " <<  n << endl;
    for( int i = 1 ; i<= 10 ; i++) {
        // cout << " table of " << n << endl;
        cout<< n << " x " << i << " = " <<  (n*i) << endl; ;
    }
}
