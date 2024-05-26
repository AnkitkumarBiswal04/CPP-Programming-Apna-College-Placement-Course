#include<iostream>
using namespace std;
// using continue statement expect the number divisible by 3
//we print numbers from 1 to 100
int main(){
    for(int n=1;n<=100;n++){
        if(n%3==0){
            continue;
        }
        cout<<"the numbers are:"<<n<<endl;
    }
    return 0;
}
