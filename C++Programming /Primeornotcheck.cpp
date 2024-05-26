#include<iostream>
using namespace std;
//this code helps us check whether it is a prime number or not 
int main(){
    int i;
    int n;
    cin>>n;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"It is not a prime number"<<endl;
            break;
        }
    }
    if(i==n){
        cout<<n<<endl;
        cout<<"It is a prime number"<<endl;
    }
    return 0;
}
