#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number to print Table in reverse "<<endl;
    cin>>n;
    for(int i=10;i>=1;--i){
        cout<<n<<" X "<<i<<" = "<<(n*i)<<endl;
    }
    return 0;
}