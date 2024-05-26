#include<iostream>
using namespace std;
// this code is to understand if, else if,else statement
int main(){
    int savings;
    cin>>savings;
    if(savings>50){
        cout<<"pizza"<<endl;
    }
    else if(savings>30){
        cout<<"Burger"<<endl;
    }
    else{
        cout<<"chocolate"<<endl;
    }
    return 0;
    
}
