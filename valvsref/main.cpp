#include<iostream>
using namespace std;
    // pass by value
    // function
    // int
    // void solve(int a ){
    //     cout<<"inside function"<<a<<endl;
    //     a++;
    //     cout<<"inside function"<<a<<endl;
    // }

    // // char
    // void solve(char ch){
    //     cout<<"inside function"<<ch<<endl;
    //     ch++;
    //     cout<<"inside function"<<ch<<endl;
    // }

    // // string
    // void solve(string name){
    //     cout<<"inside function"<<name<<endl;
    //     name[0]='z';
    // }
    
    // pass by reference

    // int
    // void solve(int &b){
    //     cout<<"inside function ="<<b<<endl;
    //     b++;
    //     cout<<"inside function = "<<b<<endl;
    // }

    // // char
    // void solve(char &st){
    //     cout<<"inside function ="<<st<<endl;
    //     st++;
    //     cout<<"inside function ="<<st<<endl;
    // }

    // // string
    // void solve(string &nam){
    //     cout<<"inside function ="<<nam<<endl;
    //     nam[0]='x';
    //     cout<<"inside function ="<<nam<<endl;
    // }


    // string array

    void  countEvenNum(int arr[], int size, int &count){
        for(int i=0; i<size; i++){
            if(arr[i]%2==0){
                count++;
            }
        }
    }

        


        int main(){

    // int
    // int b=5;
    // cout<<"inside main"<<b<<endl;
    // solve(b);
    // cout<<"inside main"<<b<<endl;

    // // char
    // char st='k';
    // cout<<"inside main"<<st<<endl;
    // solve(st);
    // cout<<"inside main"<<st<<endl;

    // // string
    // string nam= "akshita";
    // cout<<"inside main"<<nam<<endl;
    // solve(nam);
    // cout<<"inside main"<<nam<<endl;


    // pass by reference
    // int 
    // int b=50;
    // cout<<"inside main ="<<b<<endl;
    // solve(b);
    // cout<<"inside main ="<<b<<endl;

    // // char
    // char st='o';
    // cout<<"inside main ="<<st<<endl;
    // solve(st);
    // cout<<"inside main ="<<st<<endl;

    // // string
    // string nam="abcd";
    // cout<<"inside main ="<<nam<<endl;
    // solve(nam);
    // cout<<"inside main ="<<nam<<endl;


    // string array

    int arr[]={1,2,3,4,5};
    int size=5;
    int count=0;

    countEvenNum(arr,size,count);
    cout<<"Even Num Count ="<<count<<endl;
}