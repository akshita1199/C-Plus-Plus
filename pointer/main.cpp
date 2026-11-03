#include<iostream>
using namespace std;

void solve(int *arr){
    cout<<"inside of array function = "<<sizeof(arr)<<endl;
}


int main(){

    // int num=50;
    // cout<<"printing address of num ="<<&num<<endl;
    // int *ptr=&num;

    // cout<<num<<endl;
    // cout<<&num<<endl;
    // cout<<ptr<<endl;
    // cout<<&ptr<<endl;
    // cout<<*ptr<<endl;
    // (*ptr)++;
    // cout<<*ptr<<endl;


    // null pointer
    // int *ptr =NULL;
    // cout<<*ptr;

    // array pointer

    int arr[4]={1,2,3,4};
    cout<<sizeof(arr)<<endl;
    solve(arr);
}