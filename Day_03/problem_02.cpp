#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter a alphabate letter:"<<" ";
    cin>>c;
    if(c=='a' || c=='A'|| c=='i'|| c=='I'|| c=='e'|| c=='E'|| c=='O'|| c=='o'|| c=='u'|| c=='U'){
        cout<<"Entered alphabate leter is vowel"<<endl;

    }
    else{
        cout<<"Entered number is consonant"<<endl;

    }
}