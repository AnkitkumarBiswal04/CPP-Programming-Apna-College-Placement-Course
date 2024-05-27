#include<iostream>
#include<cmath>//we are importing this because we are using sqrt(n) inside for loop
using namespace std;
//this code is used to check whether it is prime number or not 
int main(){
    int n;
    cin>>n;
    int i;
    bool flag=0;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            flag=1;
            cout<<"not a prime"<<endl;
            break;
        }
        if(flag==0){
            cout<<"it is prime"<<endl;
            break;
        }
    }
    return 0;
}
