#include<iostream>
using namespace std;
int main(){
    int n;
    int a=0,b=1;
    cout<<"Enter how many numbers you want to print"<<" ";
    cin>>n;
    cout<<"fibonacci series: ";

    for(int i=1; i<=n;i++){
        cout<<a<<" ";
        int next=a+b;
        a=b;
        b=next;

    }
    return 0;
    
}