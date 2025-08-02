#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    long long int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;

    }
    cout<<" answe is: "<<ans<<endl;
    return 0;
}