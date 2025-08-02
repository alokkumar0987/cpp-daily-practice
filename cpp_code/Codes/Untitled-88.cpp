#include<iostream>
using namespace std;
     int  fib( int n){
         //BASE CASE 
         if(n==0)
         return 0;
         if(n==1)
         return 1;
         int smaller= fib(n-2);
         int bigger = fib(n-1)+ smaller;
         return bigger;
     }
     int main(){
        int n;
        cout<<"Enter number for fibnochi number" << endl;
        cin>>n;
        cout<< " printing fibnochi number "<<endl;
        int  ans =fib(n);
      
        cout<< ans<< endl;
     }