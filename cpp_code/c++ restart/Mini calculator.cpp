#include<iostream>
using namespace std;
int main(){
    int a,b;
    char operation;
    cout<<"Enter First number:";
    cin>>a;
    cout<<"Enter operation-> +,-,*,/,% "<<endl;
    cin>>operation;
    cout<<"Enter second number:";
    cin>>b;
    switch(operation){
        case '+':
        cout<<"sum of "<<a<<"and "<<b<<"is:"<<a+b<<endl;
    
    break;
    case '-':
        cout<<"Subtraction of "<<a<<"SS and "<<b<<"is:"<<a-b<<endl;
    break;
    case '*':
        cout<<"multiplication of "<<a<<" and "<<b<<"is:"<<a*b<<endl;
    break;
    case '/':
    if(b!=0){
    double d=(double)a/b;
        cout<<"Division of "<<a<<" and "<<b<<"is:"<<d<<endl;
}
else{
    cout<<"Error! can't be divide by zero"<<endl;
}
break;
    case '%':
        cout<<"modulus of "<<a<<" and "<<b<<"is:"<<a%b<<endl;
        break;
        default:
        cout<<"Invalid operation"<<endl;
}
return 0;
}