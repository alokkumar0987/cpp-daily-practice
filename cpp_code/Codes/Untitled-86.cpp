#include<iostream>
using namespace std;
class  A {
    public:
    void callA(){
        cout<<" calling A "<<endl;
    }
};
class B{
    public:
    void callB(){
        cout<<" calling B "<<endl;
    }
};
class c:public A ,public B
{

};
int main(){
    c object;
    object.callA();
    object.callB();
    return 0;
}