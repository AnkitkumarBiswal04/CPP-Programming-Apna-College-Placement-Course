#include<iostream>
using namespace std;
//this code is for nested if statement 
int main(){
    int savings;
    cin>>savings;
    if(savings>50){
        if(savings>100){
            cout<<"Dominoz pizza"<<endl;
        }
        else{
            cout<<"pizza hut pizza"<<endl;
        }
    }
    else if(savings>30){
        cout<<"burger"<<endl;
    }
    else{
        cout<<"chocolate"<<endl;
    }
    return 0;
}
