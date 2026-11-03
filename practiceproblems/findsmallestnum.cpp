#include<iostream>
#include<climits>
#include<vector>
using namespace std;
    
int main(){
    int size;
    cout<<"enter size";
    cin>>size;
    int num[size];
    // cout<<"enter size = "<<size;
    cout<<"enter num = ";
    for(int i=0; i<size; i++){
        cin>>num[i];
    } 
        int smallest = INT_MAX;
        for(int i=0; i<size; i++){
            if(num[i]<smallest){
                smallest=num[i];

            }
        }
        cout<<"smallest num ="<<smallest<<endl;
    
}