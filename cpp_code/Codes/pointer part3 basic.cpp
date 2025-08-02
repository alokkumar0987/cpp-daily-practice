#include<iostream>
    using namespace std;
         int main() {
            int num = 5;
            
    
           
            int *p = &num;
            cout<<"before "  <<*p<<endl;   
            (*p)++;
            cout<<"after "  << *p<<endl;   
            cout<<" size of integer " <<sizeof(*p)  <<endl; 


                cout<<"important concept"  <<endl;
                int i=7;
                int *t =&i;
                cout<<(*t)<<endl;       
                //print 7   

                   *t=*t+1;      // print 8
                   cout<<*t<<endl; 
                   cout<<" before t" <<t <<endl;
                   t= t+1;
                cout<< " after t"<<t<<endl;   // integer 4 bites hota hai na to mtlab next character print ho jayuega 
         }