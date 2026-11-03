#include<iostream>
#include<string>
using namespace std;

int main(){
    string a ="";
    cout<<"ENTER A";
    getline(cin,a);
    a.erase(1,4);
    cout<<a;
    return 0;
}