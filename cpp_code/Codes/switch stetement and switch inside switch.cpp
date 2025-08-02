#include<iostream>
using namespace std;
int main() {
   /*/int num = 5;
     cout<<endl;

    switch(num) {
        case 1: cout << "first"<< endl;
        break;

        case 2: cout << "second"<< endl;
break;
default : cout<< "this is default" <<endl;
    }
    cout<<endl;*/
    char ch = '1' ;
    int num =1;
    switch(ch) {
        case 1: cout<<"first" <<endl;
        case '1' : switch(num){
            case 1: cout<<"value of number is : "<< num <<endl;
            break;
        }
        break;
    }
}