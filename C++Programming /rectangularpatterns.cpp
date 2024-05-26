#include<iostream>
using namespace std;
// this code is to print pattern like this as given below 
// *****
// *****
// *****
// *****
int main(){
    int rows,column;
    cin>>rows>>column;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=column;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
