#include<iostream>
using namespace std;
class Animal{       
    public:
    void bark() {
        cout<< " barking " <<endl;
    }
};
class Human{
    public:
    void speak(){
        cout<<" speaking " <<endl;

    }
};
 //multiple inheritance
 class HYBRID:public Animal,public Human{
    public:
    void hybrid() {
        cout<< "  crying -> huaa huaa " <<endl;
    
    }
 };
 int main(){
    HYBRID obj;
    obj.bark();
    obj.speak();
    obj.hybrid();
    return 0;

 }
