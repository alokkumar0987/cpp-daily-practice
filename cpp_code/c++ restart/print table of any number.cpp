#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter number for print Table:";
  cin>>n;
  for(int i=1;i<=10;i++){
    int result=(n*i);
    cout<<n<<" X "<<i<<" = "<<result<<endl;
  }
  return 0;

}