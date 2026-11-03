#include<iostream>
#include<string>
using namespace std;

int main (){

    string a ="";
    cout<<"enter a";
    getline(cin,a);
    int start=0;
    int end = a.length()-1;
    

    while(start<end){
        char temp =a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
        }
        cout<<"reverse string :"<<a<<endl;
    }