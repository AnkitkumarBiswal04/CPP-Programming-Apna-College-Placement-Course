#include<iostream>
using namespace std;
//using switch case we got to know how in a robot using differnt character we can say hello in different language
int main(){
    char button;
    cout<<"enterred character button is:";
    cin>>button;
    cout<<button<<endl;
    //this is using if,else if ,else statement 
    // if(button=='a'){
    //     cout<<"hello"<<endl;
    // }
    // else if(button=='b'){
    //     cout<<"Namaste"<<endl;
    // }
    // else if(button=='c'){
    //     cout<<"Salut"<<endl;
    // }
    // else if(button=='d'){
    //     cout<<"hola"<<endl;
    // }
    // else if(button=='e'){
    //     cout<<"ciao"<<endl;
    // }
    // else{
    //     cout<<"i am still learning more "<<endl;
    // }
switch(button){
    case 'a':
        cout<<"hello"<<endl;
        break;
    case 'b':
        cout<<"Namaste"<<endl;
        break;
    case 'c':
        cout<<"Salut"<<endl;
        break;
    case 'd':
        cout<<"hola"<<endl;
        break;
    case 'e':
        cout<<"ciao"<<endl;
        break;
    default:
        cout<<"i am still learning more "<<endl;
        break;
    }

    return 0;
}
