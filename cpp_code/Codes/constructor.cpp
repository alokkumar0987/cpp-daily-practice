// constructor used to initialize data member

#include<iostream>
using namespace std;
class student {
    public:
    student(){
        cout<< " hello doniya "<<endl;
    }
};
int main(){
    student obj;      //  auto call ho jata constructor
    return 0;
}