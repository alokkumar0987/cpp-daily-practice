#include<iostream>
using namespace std;
 class A{
    public:
    void call1(){
        cout<< " calling A "<< endl;
    }
    
 };
 class B{
    public:
    void call2(){
        cout<< "calling B "<<endl;
    }
 };
 class C:public A , public B{
    public:
    
 };
 int main(){
    C object;
    object.call1;
    object.call2;
    return 0;
 }