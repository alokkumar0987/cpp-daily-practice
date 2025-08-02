#include<iostream>
using namespace std;
int x=100; // glocal variable
int main(){
 int x=10;  // local variable
cout<<" global variable: "<<::x;
cout<<endl;
cout<<" local variable: "<<x;
}