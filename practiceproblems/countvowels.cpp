#include<iostream>
#include<string>
using namespace std;
 
int main(){
    string a="";
    cout<<"enter a";
    getline(cin,a);
    int count =0;
    for(char ch:a){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
    count++;
    }
}
cout<<"vowels"<<count;
    return 0;
}