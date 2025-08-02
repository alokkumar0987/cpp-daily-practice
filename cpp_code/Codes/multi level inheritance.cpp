#include<iostream>
using namespace std;
class animal{
    public:
    string name ;
    int age ;
    int weight;
    public:
    void bark() {
        cout<<" barking " <<endl;

    }
};

class dog:public animal{
    public:
    void color() {
        cout<<" block " <<endl;

    }
};
class germanShepherd:public dog{
    public:

};

int main() {
    germanShepherd object ;
      object.name="germany";
    cout<<object.name<<endl;
     object.bark();
     object.color();
    object.age= 2;
    cout<< object.age<<endl;
    object.weight= 10;
    cout<<object.weight<<endl;

    return 0;

}