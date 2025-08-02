#include<iostream>
using namespace std ;
int main() {
    int num[6] = {2, 7 , 1 , -4 , 11 , 9};
    int sum=0;
    

    for(int i = 0; i<6; i++) {
        sum= sum+num[i];

    }
    cout<<"sum of number is : "<< sum<<endl;
    return 0;
}