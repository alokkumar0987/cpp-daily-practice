#include<iostream>
using namespace std;
// This program finds the absolute value of a number without using the abs() function
int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    /*

    // If x is negative, multiply by -1 to get the absolute value
    if (x < 0) {
        x = -x;
    }

    cout << "The absolute value is: " << x << endl;

    */

    if(x>=0){
        cout << "The absolute value is: " << x << endl;
    }
    
    if(x<0){ 
        cout << "The absolute value is: " << -x << endl;
    }

    return 0;
}