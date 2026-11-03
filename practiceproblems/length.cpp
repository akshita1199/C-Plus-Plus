

#include<iostream>
#include<string>
using namespace std;

int main(){
    string input ="";
    cout<<"entering string :"<<" ";
    cin>>input;
    int length=0;
    for(int i=0; input [i]!='\0'; i++){
        length++;
    }
    cout<<"string :"<<" "<<input<<endl;
    cout<<"length :"<<" "<<length;

    // or
    // cout<<"length :"<<input.length()<<endl;
    
    return 0;
}