#include<iostream>
#include<cmath>
using namespace std;
// int decimaltobinarymethod1(int n){
//     // division method.
//     int binary =0;
//     int i=0;
//     while(n>0){
//         int bit = n % 2;
//         binary = bit*pow(10,i++)+binary;
//         n=n/2;
//     }
//     return binary;
// }

// int main(){
//     int n;
//     cin>>n;
//     int binary = decimaltobinarymethod1(n);
//     cout<<binary<<endl;

// }
 int decimaltobinarymethod2(int n){
     //bitwise method
    int binary =0;
    int i=0;
    while(n>0){
        int bit = n & 1;
        binary = bit*pow(10,i++)+binary;
        n=n>>1;
    }
    return binary;
}
int binarytodecimal(int n){
    int decimal = 0;
    int i=0;
    while(n){
        int bit = n%10;
        decimal = decimal +bit * pow (2,i++);
        n /=10;
    }
    // 
    return decimal;
}

int main(){
    // int n;
    // cin>>n;
    // int binary = decimaltobinarymethod2(n);
    // cout<<binary<<endl;
int binary;
cin >> binary;
cout << binarytodecimal(binary)<<endl;
}