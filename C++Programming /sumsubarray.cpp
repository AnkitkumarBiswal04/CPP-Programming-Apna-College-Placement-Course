#include<iostream>
using namespace std;
//this code is to find sum of all the subarray
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int current;
    for(int i=0;i<n;i++){
        current=0;
        for(int j=i;j<n;j++){
            current +=arr[j];
             cout<<current<<" ";
        }
            
    }

    return 0;
}
