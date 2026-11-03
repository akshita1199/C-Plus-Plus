#include<iostream>
#include<string>
using namespace std;

int main(){
    string a =" ";
    string b =" ";
    cout<<"enter the a";
   getline( cin,a);
    cout<<"enter the b";
    getline(cin,b);
    
    
        if(a.find(b)!=string::npos){
            cout<<" FOUND"<<endl;
        }
        else{
            cout<<"NOT FOUND"<<endl;
        }
        return 0;
}
