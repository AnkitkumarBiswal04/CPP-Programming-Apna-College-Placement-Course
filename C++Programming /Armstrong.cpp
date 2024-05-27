#include<iostream>
#include<math.h>
using namespace std;
//this code is to find armstrong 153
int main(){
    int n;
    cin>>n;
    int original=n;
    int sum=0;
    while(n>0){
        int lastdigit=n%10;
        sum=sum+pow(lastdigit,3);
        n=n/10;
    }
    if(original==sum){
        cout<<"it is armstrong";
    }
    else{
        cout<<"it is not armstrong";
    }
    cout<<endl;
    return 0;
}
