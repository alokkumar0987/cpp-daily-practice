// C++ program to find factorial 
// of input  number
#include <iostream>
using namespace std;

int factorial(int n)
{
	// Single line to find factorial
	return ((n == 1 || n == 0) ? 1 : 
			n * factorial(n - 1));
}


int main()
{
	int num ;
	cin>>num;
	cout << "Factorial of " << 
			num << " is "<< 
			factorial(num);
	return 0;
}

// This code is contributed by shivanisinghss2110
