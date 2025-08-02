#include<iostream>
using namespace std;
int power(int num_1,int num_2){
    int ans=1;
    for(int i=1;i<=num_2;i++){
        ans=ans*num_1;
    }
    return ans;
}
int main(){
int a,b;
cout<<"Enter nuber of base: ";
cin>>a;
cout<<"Enter the number of power: ";
cin>>b;
long long int result=power(a,b);
cout<<" result="<<result<<endl;
}