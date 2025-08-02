// C++ program for factorial
// of a number
#include <iostream>
using namespace std;

// Function to find factorial of given
// number using while loop
  int factorial( int n)
{
	if (n == 0)
		return 1;
	int i = n, fact = 1;
	while (n / i != n) {
		fact = fact * i;
		i--;
	}
	return fact;
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
