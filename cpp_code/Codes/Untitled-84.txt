// single inheritance 
#include<iostream>
using namespace std;
class animal{
    public:
    int age;
    float weight;
    public:
    void  speak(){
        cout<< "  barking  " <<endl;
    }
};
class dog:public animal{
    public:
 int bark(){
    cout<< " dog barking "<< endl;
    return 1;
 }
};
class Germanshepered:public dog{
    public:

};
class hybrid1:public Germanshepered{
public:
};
int main(){
     hybrid1 object;
    object.speak();
    object.bark();
    cout<<object.weight<<endl;
    return 0;
}
