#include<iostream>
using namespace std;
//this code is to find sum of  n integers using for loop
int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int counter=1;counter<=n;counter++){
        sum=sum+counter;
    }
    cout<<"sum of all the n inputs are :"<<sum<<endl;
    return 0;
}
