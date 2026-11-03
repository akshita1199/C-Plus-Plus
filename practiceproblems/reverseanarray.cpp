#include<iostream>
#include<vector>
using namespace std;

    int main(){
    int size;
    cout<<"enter size";
    cin>>size;
    int num[size];
    cout<<"enter num";
    for(int i=0; i<size; i++){
        cin>>num[i];
    }
    cout<<"reverse array";
    for(int i=size-1; i>=0; i--){
        cout<<num[i]<<" ";
    
    }


}