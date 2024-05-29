#include<iostream>
using namespace std;
//this is the code to find maximum ith in an array 
//input:-
//5
//-1 23 4 5 6

//output:
//1 
//23 
//23 
//23 
//23 
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int mx=max(mx,arr[i]);
        cout<<mx<<" "<<endl;
    }
    return 0;
}
