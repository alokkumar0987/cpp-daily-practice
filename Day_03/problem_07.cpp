#include<iostream>
using namespace std;
int main(){
    int n;
    unsigned long long factorial =1;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    if(n<0){
        cout<<"factorial of nevative number does not exist"<<" ";
    }
    else {
            for( int i=1;i<=n;i++){
                factorial *=i;

            }
            cout<<"Factorial of "<<n<<" = "<<factorial;

        }
        return 0;

    }