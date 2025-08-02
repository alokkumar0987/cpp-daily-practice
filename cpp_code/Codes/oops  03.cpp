#include<iostream>
using namespace std;
class alok 
{
    //properties 
    public:
    string name = " bharti" ;
    int age =20;
    float height=5.6 ;
    char sect= 'a' ;
    void print() {
        cout<< sect <<endl;
    }
};
    int main() {
        alok patna ;
        cout<< " double name of alok :"<<patna.name<<endl;
        cout<< " age of alok: " << patna.age<<endl;
        cout<< " height of alok: "<<patna.height<<endl;
        cout<<"class  section of alok: " <<patna.sect<<endl;
    }
