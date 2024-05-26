#include<iostream>
using namespace std;
//As neha wants to go out of home but her mom only allows her on odds days only
//and she gets her monthly pocket money as 3000 only 
//and whenever she goes out she spent 300 rupees
//print the number of days she can go out for
int main(){
    int pocketmoney=3000;
    for(int days=1;days<=30;days++){
        if(days%2==0){
            continue;
        }
        if(pocketmoney==0){
            break;
        }
        cout<<"go out on days:"<<days<<endl;
        pocketmoney=pocketmoney=300;
    }
    return 0;
}
