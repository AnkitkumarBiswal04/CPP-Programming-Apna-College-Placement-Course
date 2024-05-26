#include<iostream>
using namespace std;
// in this we will get to know thw size of each primitive datatypes(int ,float,char,bool)
//and how does data type modifiers work(short int, ling int ,signed, unsigned )
int main(){
    int a;
    a=12;
    cout<<"the size of int is "<<sizeof(a)<<endl;
    float b;
    cout<<"the size of float is "<<sizeof(b)<<endl;
    char c;
    cout<<"the size of char is "<<sizeof(c)<<endl;
    bool d;
    cout<<"the size of bool is "<<sizeof(d)<<endl;
    short int si;
    cout<<"the size of short int is "<<sizeof(si)<<endl;
    long int li;
    cout<<"the size of long int is "<<sizeof(li)<<endl;
    return 0;
}
