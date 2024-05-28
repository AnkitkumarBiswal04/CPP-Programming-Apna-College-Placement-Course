#include<iostream>
using namespace std;
//this code is to search element in an array using binary search
int binarySearch(int arr[],int n,int key){
    int source=0;
    int end=n;
    while(source<=end){
        int mid=(source+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            source=mid+1;
        }
    }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarySearch(arr,n,key);
}
