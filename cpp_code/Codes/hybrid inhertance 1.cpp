#include<iostream>
using namespace std;
class A{
    public:
    void call1(){
        cout<<" calling  A "<<endl;

    }
};
class B{+
    public:
    void call2(){
        cout<<" calling B "<<endl;
    }
};
class c:public A, public B{

};
int main() {
    c object;
    cout << " ye sab hybrid inheritance hota h"<<endl;
    object.call1();
    object.call2();
return 0;
}