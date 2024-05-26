#include<iostream>
using namespace std;
//this code is to find the maximum element from the three number 
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<"a"<<endl;
        }
        else{
            cout<<"c"<<endl;
        }
    }
    else if(b>c){
        cout<<"b"<<endl;
    }
    else{
        cout<<"c"<<endl;
    }
    return 0;
    
}
