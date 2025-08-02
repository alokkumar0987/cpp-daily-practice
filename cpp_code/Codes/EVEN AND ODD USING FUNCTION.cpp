//enen and odd finding by using function program
#include<iostream>
using namespace std;
// 0 - : even 
//1 - : odd 
bool iseven (int a) {
    // for odd 
    if(a&1) {
        return 0;

    }
    else{
        //even
        return 1;

    }
}
int main() {
    int num;
    cin>>num;
    if(iseven(num)) {
        cout<<"number is even"<< endl;
       }
        else {
            cout<<"number is odd"  << endl;
        }
        return 0;

    }
