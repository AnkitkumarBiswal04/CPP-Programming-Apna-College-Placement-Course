#include<iostream>
using namespace std;
//this code is to print the pascals triangle like this 
// 1 
// 1 1 
// 1 2 1 
// 1 3 3 1 
// 1 4 6 4 1
int fact(int num){
    int factorial=1;
    for(int i=2;i<=num;i++){
        factorial=factorial*i;
    }
    return factorial;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            int ans = fact(i)/(fact(j)*fact(i-j));
            cout<<ans<<" ";
        }
        cout<<endl;
    }
   
    return 0;
}
