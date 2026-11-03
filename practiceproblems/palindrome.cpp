#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string a ="";
    cout<<"enter a";
    getline(cin,a);
    // string rev = a;
    // reverse(rev.begin(),rev.end());
    // if(a==rev){
        // cout<<"YES";
    // }
    // else{
        // cout<<"NO";
    // }

    // while loop
    int start=0;
    int end = a.length()-1;
    
    bool ans = true;
        while(start<end){
            if(a[start]==a[end]){
                ans=true;
            }
            else{
                ans=false;
                break;
            }
            start++,end--;
        }
        
        cout<<ans;
    return 0;
}