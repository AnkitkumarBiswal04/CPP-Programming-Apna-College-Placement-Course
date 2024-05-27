#include<iostream>
using namespace std;
//this is the code for factorial using function
int fact(int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
        factorial=factorial*i;
    }
    return factorial;
}
int main(){
    int n;
    cin>>n;
    int ans=fact(n);
    cout<<"facorial is:"<<ans<<endl;
    return 0;
}
