#include<iostream>
using namespace  std;
int main(){
    int a,b;
    cout<<"Enter first number"<<" ";
    cin>>a;
    cout<<"Enter second number"<<" ";
    cin>>b;
    cout<<"Before SWapping "<<endl;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;

    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping"<<endl;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;

}