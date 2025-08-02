#include<iostream>
using namespace std;
 class animal {
    public:
    int weight;
    int age;


 };
 class dog:public animal{
    public:
    void bark() {
        cout<<" barking " <<endl;
    }
 };
 int main() {
    dog obj;
 cout<<obj.age<<endl;
    obj.bark();
    return 0; 
 }
 
 