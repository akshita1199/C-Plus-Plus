#include<iostream>
#include<string>
using namespace std;

int main(){
    string ainput ="";
    string binput="";
    cout<<" enter ainput : "<<ainput<<endl;
    cin>>ainput;
    cout<<"enter binput : "<<binput<<endl;
    cin>>binput;
    ainput.append(binput);
    cout<<ainput<<endl;
}
