// C++ program for factorial
// of a number
#include <iostream>
using namespace std;

// Function to find factorial of
// given number
unsigned int factorial(unsigned int n)
{
   int i=1;

	int res = i;
	for (i = 2; i <= n; i++)
		res *= i;
	return res;
}

// Driver code
int main()
{
	int num ;
    cin>>num;
	cout << "Factorial of " << num << " is "
		<< factorial(num) << endl;
	return 0;
}
