#include<iostream>
using namespace std;
int main() {
    int arr[200000] = {1} ;
    int n;
    cin>>n ;
    cout<<"print all elent 1 "<< endl;
    for(int i =0; i<n ; i++) {
        arr[i]= 1;
        cout<<arr[i]<< " ";
    }
}