#include<iostream>
using namespace std;
     int main() 
     {
         int num = 5;
         cout <<" address of 5 " <<&num<< endl;
         
         int *ptr=&num;
         cout<< " value of address " << *ptr<<endl;
          char ch = 'a';
          cout<< " address of a " <<&ch<<endl;
            char *p =&ch;
            cout<< " value of char " << *p<<endl;
             double d = 4.2;
             double *ptr2 = &d;
             cout<<" value of d is "<<*ptr2<<endl;

     }