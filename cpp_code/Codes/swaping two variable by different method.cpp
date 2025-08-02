#include<iostream>
using namespace std;
int main(){
    int a= 5;
    int b= 6;
    cout<<"Before swaping "<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
   /*int temp=a;
     a=b;
     b=temp;
    cout<<"AFTER SWAPING"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;

// without  third variable;

    a=a+b;
    b=a-b;
    a=a-b;
    
      cout<<"AFTER SWAPING"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
*/
// using xor operator for swaping     --> bit 5->101 and 6-> 110
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"AFTER SWAPING"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;


 
}