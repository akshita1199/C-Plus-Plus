#include<iostream>
using namespace std;

int main(){

    // int
    // int arr[5]={10,20,30,40,50};
    // int *p1=&arr[3];
    // int *p2=&arr[4];
    // cout<<p1-p2<<endl;  //ans=-1  location difference
    // cout<<p2-p1<<endl;  //ans=1

    // cout<<*p1-*p2<<endl; //ans=-10
    // cout<<*p2-*p1<<endl; //ans=10  value difference


     //char 
   char arr[5]={'a','b','c','d','e'};
    char *p3= &arr[3];
    char *p4= &arr[4];

    cout<<p3-p4<<endl;   //location 
    cout<<p4-p3<<endl;

    cout<<(char)(*p3-*p4)<<endl;
    cout<<(char)(*p4-*p3)<<endl;
    cout<<(char)(*p4-*p3)<<endl;

    cout<<(void*)p3<<endl;
    cout<<p3<<endl;

}