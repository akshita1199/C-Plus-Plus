#include<iostream>
#include<vector>
using namespace std;

    int main(){
    int size;
    cout<<"enter size";
    cin>>size;
    int num[size];
    // cout<<" size =  "<<size<<"  "<<endl;
    cout<<"enter num";
    for(int i=0; i<size; i++){
        cin>>num[i];

    
        }
        int count =0;
        for(int i=0; i<size; i++){
            if(num[i]%2!=0){
                count++;
            }
        }
        cout<<"count odd num = "<<" "<<count<<endl;
    }    


