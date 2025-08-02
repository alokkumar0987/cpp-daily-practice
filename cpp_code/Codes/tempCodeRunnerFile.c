#include<iostream>
using namespace std;
void sortArray(int *arr,int n){
    //base case 
    if(size==0 ||sise==1)
    return ;
}
//  1 case ko solve kar liya -->largest element ko end mai rakh denge
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[],arr[i+1])
        }
        // recurssive call 
        sortArray(arr,n-1);
    }

int main(){
    int arr[10]={3,687,67,67,55,56,466,34,2,3};
    sortArray(arr,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
        return 0;
    }