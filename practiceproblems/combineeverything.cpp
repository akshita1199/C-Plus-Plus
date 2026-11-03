#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string a="";
    cout<<"enter a";
    getline(cin,a);
    a.append("chef");
    string rev = a;
    reverse(rev.begin(),rev.end());
    cout<<"final string"<<a<<endl;
    cout<<"length :"<<a.length()<<endl;
    if(a==rev){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
    return 0;
}