#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string a="";
    cout<<"enter a";
    getline(cin,a);
    a.append("chef");
    // string rev = a;
    // reverse(rev.begin(),rev.end());
    cout<<"final string"<<a<<endl;
    cout<<"length :"<<a.length()<<endl;
    // if(a==rev){
        // cout<<"palindrome";
    // }
    // else{
        // cout<<"not palindrome";
    // whileloop
    int start=0;
    int end = a.length()-1;
    bool ans=true;
    while(start<end){
        if(a[start]==a[end]){
            ans=true;
        }
        else{
            ans=false;
            break;
        }
        start++;
        end--;
    }
    if(ans){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    
    }
    return 0;
}
