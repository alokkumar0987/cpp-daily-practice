#include<iostream>
using namespace std ;
int main() {
    int array [1000] ={23, 244 ,123, 356 , 3423 ,456 , 544578, 677987 ,321 , 1231, 545667 , 45678 ,13457, 656767, 67, 678, 57 , 778, 689900, 3456, 23, 346,344};
 cout<<" enter nuber that you want to add upto"<<endl;
  int  sum = 0;
    int n ;
    cin>>n;
    
    for(int i = 0 ; i<n ; i++) {
        sum = sum+ array[i];

    }
    cout<<"sum of number is : " << sum <<endl;
  //  return 0;
}