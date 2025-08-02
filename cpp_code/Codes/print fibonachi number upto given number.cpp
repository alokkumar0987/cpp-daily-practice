#include<iostream>
using namespace std;

int main() {
    int n, x , y , z   ;
    cout<< " Enter given numver"<< endl;
    cin>>n;
    x=0;
    y= 1;
    z = 0;
     cout<< " fibonachi number upto given number"  <<endl;
    while(z<=n) {

        cout<<"\t" <<z;

        x = y;
        y = z ;
        z = x+y;

    }

    return 0;

}