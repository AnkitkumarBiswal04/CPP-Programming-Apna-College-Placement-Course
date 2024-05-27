#include<iostream>
using namespace std;
//this is the code to print inverted pyremid like
// *****
// ****
// ***
// **
// *
int main(){
int n;
cin>>n;
for(int i=n;i>=1;i--){
    for (int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
}   
}
