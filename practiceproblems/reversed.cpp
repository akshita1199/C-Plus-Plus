#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    // using loop
    string a ="";
    cout<<"enter a";
    getline(cin,a);
    int i=a.length()-1;
    while(i>=0){
    cout<<a[i];
    i--;
    }


    // using reverse

    // string a =" ";
    // cout<<"enter a";
    // getline(cin,a);
    // reverse(a.begin(),a.end());
    // cout<<a<<endl;
    return 0;
}