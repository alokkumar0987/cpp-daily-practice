#include<iostream>
using namespace std;
class A

{     public:
      int num1= 20, num2=10;
public:
     void fun(){
     int sum= num1+ num2;
     cout<<" addition "<< sum<< endl;
     }
     void fun( int a , int b) {
int sub= a-b;
cout<< " subtraction "<< sub<< endl;
     }
};

int main(){
    A object ;
    cout << " " ;
   object.fun();
   object.fun( 30 ,10 );

    return 0;
}