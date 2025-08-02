
// by  call reference method
#include<iostream>
using namespace std;

// Function to find factorial 
void factorial(int n, int *f)
{
	

	for(int i= n; i >= 1; i--)
		*f = (*f) * i;
}

int main()
{
	
	int  fact = 1;
	cout<< " Enter the number: " << " ";

	int num;
	cin>>num;


	factorial(num, &fact);
	cout << "Factorial of " << num<<" is " << fact<<endl;
			
			
	return 0;
}
