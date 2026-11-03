#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string a ="";
    cout<<"enter a";
    getline(cin,a);
    string rev = a;
    reverse(rev.begin(),rev.end());
    if(a==rev){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}