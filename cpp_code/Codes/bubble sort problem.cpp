// implementation of Bubble Sort Algorithm in C++
// Bubble Sort C++
#include <bits/stdc++.h>
using namespace std;

// Function of implement bubble sort C++
void bubbleSort(vector<int> &v, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        // Last i elements are already
        // in place
        for (j = 0; j < n - i - 1; j++)
            if (v[j] > v[j + 1])
                swap(v[j], v[j + 1]);
}

// Function to print an array
void printArray(vector<int> &v, int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;
}

// Driver code For Bubble Sort Program in C++
int main()
{
    int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++){
       cin>>v[i];
  }
    bubbleSort(v, n);
    cout << "Sorted array: \n";
    printArray(v, n);
    return 0;
}