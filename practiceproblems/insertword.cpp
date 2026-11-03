#include<iostream>
#include<string>
using namespace std;

int main(){
    string a = "";
    // int pos;
    cout<<"ENTER STRING A";
    cin>>a;
    int pos;
    cout<<"ENTER THE POSITION";
    cin>>pos;
    a.insert(pos,"code chef");
    cout<<"RESULT : "<<" "<<a<<endl;
    return 0;
}