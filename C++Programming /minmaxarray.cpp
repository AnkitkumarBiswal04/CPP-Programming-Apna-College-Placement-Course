#include<iostream>
#include<climits>
using namespace std;
//to find the min and max from an array 
int main(){
    int n;
    cin>>n;
    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    int array[n];
    for(int i=0;i<=n;i++){
        
        cin>>array[i];
    }
    for(int i=0;i<=n;i++){
        maxNo=max(maxNo,array[i]);
        minNo=min(minNo,array[i]);
    }

    cout<<"the maximum number is :"<<maxNo<<" "<<endl<<"the minimum number is:"<<minNo<<endl;
    return 0;
}
