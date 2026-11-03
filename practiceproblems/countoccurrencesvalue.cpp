#include<iostream>
#include<vector>
using namespace std;

    int main(){
    int size;
    cout<<"enter size";
    cin>>size;
    int num[size];
    cout<<"enter number";
    for(int i=0; i<size; i++){
        cin>>num[i];
    }
    int x;
    cout<<"enter the value ";
    cin>>x;
    int count=0;
    for(int i=0; i<size; i++){
        if(num[i]==x){
            count++;
        }
    }
    cout<<"result = "<<count<<endl;
}
