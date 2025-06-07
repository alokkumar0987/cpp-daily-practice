#include<iostream>

using namespace std;
int main(){
    int n, i;
    cout<<"Enter a number for Table"<<endl;
    cin>>n;


    for(i=1;i<=10;i++) {
        cout<<n<<" = "<<n <<" X "<<i<<"="
        <<n*i<<endl;

    }
}