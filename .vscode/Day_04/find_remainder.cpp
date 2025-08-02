#include<iostream>
using namespace std;

// This program finds the remainder of two numbers without using the modulus operator
// and also demonstrates the use of the modulus operator.

// Approach 10=3*3+1 , here a=10, b=3, c=a/b, r=a-(c*b)

// this is also known by dividend = divisor * quotient + remainder
// where a is the dividend, b is the divisor, c is the quotient, and r is the remainder.
int main() {
    int a=10;
    int b=3;
    int c=a/b;
    int r=a-(c*b);
    cout << "The remainder of " << a << " divided by " << b << " is " << r << endl;
    cout << "Using modulus operator: " << a % b << endl;


    return 0;
}