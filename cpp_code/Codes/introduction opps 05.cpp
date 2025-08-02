#include<iostream>
using namespace std;
 class Hero {
    //properties 
     private :
     int passward;
     public:
     char  name ;
     void print() {
        cout<< name << endl;

     }
 };
 int main() {
    // creation of object 
    Hero boy;
   // boy.passward= 123445;
    boy.name = 'p';
   // cout<< " password of hero " << boy.passward<<endl;
    cout<<" name of passord : "<< boy.name<<endl;
    cout<<endl;
    cout<<" printing size of boy "  <<endl;
    cout<< " size of : " << sizeof(boy)<<endl;        //  should be 5 but in realty is 8 , because of here concept of padding and greedy
    cout <<endl;
    return 0;
 }