#include <iostream>
using namespace std;

void printtable(int n) {
    cout<< "TABLE OF  " << n << endl;
    for( int i = 1 ; i<= 10 ; i++) {
        cout<< n << " x " << i <<  " = " << (n*i) << endl ;

    }

}
 int main() {
    int Num;
   cout<< " Enter the number = " <<  " ";
    cin>>Num  ;
    printtable(Num) ;
   // return 0;
 }