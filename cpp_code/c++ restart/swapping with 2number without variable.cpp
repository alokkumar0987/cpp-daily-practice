#include<iostream>
using namespace std;
int main(){
    int a=20,b=10;
    cout<<"before swapping"<<endl;
    cout<<"a="<<a<<"\n"<<"b="<<b<<endl;
   /*
    a=a+b;
    b=a-b;
    a=a-b;
    */
    a=a^b;
    b=a^b;
    cout<<"After swapping"<<endl;
    cout<<"a="<<a<<"\n"<<"b="<<b<<endl;
    return 0;
}