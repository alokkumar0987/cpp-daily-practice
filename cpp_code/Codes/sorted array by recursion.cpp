#include<iostream>
using namespace std;
int sortArray(int *arr, int n){
    // base case 
    if(n==0||n==1)        //already shorted--> zero ya 1 hi element hi to h
    return 1;
    
    // ek case ko solve kar do --> baki recusion sambhal legA
    for(int i= 0; i<15;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    // recursive call 
    sortArray(arr, n-1);
}
int main(){
    int arr[15]={0,9,8,7,6,5,4,3,2,1,1,2,3,4,5};
    sortArray(arr, 15);
    for(int i= 0; i<15;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}