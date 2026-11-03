#include<iostream>
using namespace std;

int main(){

    int a=5;
    // ref variable

    int temp = a;
    cout<<temp<<endl;
    temp--;
    cout<<temp<<endl;
    temp=temp*10;
    cout<<temp<<endl;
    a++;
    cout<<a<<endl;
    temp++;
    cout<<temp<<endl;
}