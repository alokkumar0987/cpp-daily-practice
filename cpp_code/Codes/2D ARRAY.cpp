#include<iostream>
using namespace std;
int main() {
    int arr[4][3];
   // taking input
       for(int i = 0; i<4 ; i++) {
        for(int j= 0 ; j<3; j++){
            cin>>arr[i][j];
        }
       }
  /* // print  row wisw
       for(int i = 0; i<3 ; i++) {
        for(int j= 0 ; j<4; j++){
            cout<<arr[i][j]<<" " ;

        }
cout<<endl;
}
*/
// print column

       for(int i = 0; i<3 ; i++) {
        for(int j= 0 ; j<4; j++){
            cout<<arr[j][i]<< " " ;
        }
        cout<<endl;
       }

}
