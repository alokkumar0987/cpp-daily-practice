#include<iostream>
using namespace std;
class copyTest{
    public:
    int x;
    copyTest(int a)      // parametrized constructor
    {
        x=a;
    }
    copyTest(copyTest & i)           // copy constructor
    {
        x=i.x;
    }

};
int main(){
    copyTest a1(20) ;  // calling parametrized constructor
    copyTest a2(a1) ;   // calling copy constructor  
    cout<<(a2.x) ;
    return 0;
}