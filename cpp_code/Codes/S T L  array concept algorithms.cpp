#include<iostream>
#include<array>
using namespace std;

int main() {
    array<int, 4 > a = {34 , 45 , 24 , 456};


    for(int i = 0; i<4 ; i++) {
        cout<<a[i]<<endl;

    }
    cout<< "Element at 2nd index  " << a.at(2) <<  endl;
    cout<< " first element is  " << a.front()<< endl;
    cout<<" last element of array " << a.back()<< endl;
}