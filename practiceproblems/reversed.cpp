#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    // using loop
    // string a ="";
    // cout<<"enter a";
    // getline(cin,a);
    // string reversed =" ";
    // for(int i=a.length()-1; i>=0; i--){
        // reversed +=a[i];
    // }
    // cout<<"reversed"<<reversed<<endl;


    // using reverse

    string a =" ";
    cout<<"enter a";
    getline(cin,a);
    reverse(a.begin(),a.end());
    cout<<a<<endl;
    return 0;
}