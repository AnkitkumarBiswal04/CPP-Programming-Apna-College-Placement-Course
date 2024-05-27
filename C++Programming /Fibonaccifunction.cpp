#include<iostream>
#include<math.h>
using namespace std;
//this code is to print fibonacci series
void fibo(int n){
    int t1=0;
    int t2=1;
    int nextterm;
    for(int i=1;i<=n;i++){
        cout<<t1<<" ";
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
}
int main(){
    int n;
    cin>>n;
    fibo(n);
    return 0;
}
