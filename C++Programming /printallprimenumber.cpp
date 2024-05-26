#include<iostream>
using namespace std;
//in this code we are printing all the prime numbers
int main(){
    int a,b,n;
    int i;
    cin>>a;
    cin>>b;
    for(n=a;n<=b;n++){
        for(i=2;i<n;i++){
        if(n%i==0){
            break;
        }
        }
    
    if(i==n){
        cout<<n<<endl;

    }
    }
    return 0;
}
