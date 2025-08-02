#include<iostream>
using namespace std;
int main() {
   int array[100000] = {1} ;
   int n; 
   cin>>n;
    for(int i = 0 ; i<n ; i++) {
        array[i] =1;
        cout<<array[i]<<" ";
    }
}