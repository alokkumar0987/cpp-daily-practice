#include<iostream>
using namespace std;
int main(){
    int a=5,b=10,temp;
    cout<<"Before swapping"<<"\n";
    cout<<"a="<<a<<"\n"<<"b="<<b<<endl;
    //swapping two number using third variable
    temp=a;
    a=b;
    b=temp;
 
    cout<<"after swapping "<<endl;
    cout<<"a="<<a<<"\n"<<"b="<<b<<endl;
}