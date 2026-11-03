#include<iostream>
#include<string>
using namespace std;

int main(){

    string a="";
    cout<<"enter string a";
    cin>>a;
    char ch;
    cout<<"enter ch";
    cin>>ch;
    int count=0;
    for(int i=0; i<a.length(); i++){
        if(a[i]==ch){
            count++;
                }
    }
    cout<<"count of"<<ch<<"is"<<"  "<<count<<endl;
    return 0;
}