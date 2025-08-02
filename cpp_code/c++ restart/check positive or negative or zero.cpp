#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" Enter the number:"<<" ";
    cin>>n;
    if(n>0){
        cout<<"Enter number is positive"<<endl;

    }
    else{
        if(n<0){
            cout<<" Enter number is negative "<<endl;

        }
        else{
            cout<<" Enter number is Zero "<<endl;
        }
    }
    return 0;
}