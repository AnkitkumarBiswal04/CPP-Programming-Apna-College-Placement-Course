#include<iostream>
using namespace std;
//this is the code for an calculator
//which performs basic arithmetic operations using switch case
int main(){
    float n1,n2;
    char op;
    cout<<"enter the value of n1 is:";
    cin>>n1;
    cout<<n1<<endl;
    cout<<"enter the value of n2 is:";
    cin>>n2;
    cout<<n2<<endl;
    cout<<"enter the type of operation:";
    cin>>op;
    cout<<op<<endl;
    switch(op){
        case '*':
            cout<<n1*n2<<endl;
            break;
        case '/':
            cout<<n1/n2<<endl;
            break;
        case '+':
            cout<<n1+n2<<endl;
            break;
        case '-':
            cout<<n1-n2<<endl;
            break;
        default:
            cout<<"cannot perform any arithmetic operation"<<endl;
            break;
    }
    return 0;
}
