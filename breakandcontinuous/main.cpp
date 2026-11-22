#include<bits/stdc++.h>
using namespace std;

int main(){

    // for(int i=0; i<10; i++){
    //     if(i==8){
    //         break;
    //     }
    //     cout<<i<<endl;
    // }

    // for(int i=0; i<10; i++){
    //     if(i==8){
    //         continue;
    //     }
    //     cout<<i<<endl;
    // }

    /*
    problem

    your program is to use the brute-force appoach in order to find the answer to life. the universe, and everything. more preciselt...
    rewrite small numbers from input to output. stop processing input after reading in the number 42. all numbers at input are
    integers of one or two digits.

    input
    1
    2
    88
    42
    99

    output
    1
    2
    88


    */
    // while(true){
    //     int x;
    //     cin>>x;
    //     if(x==42){
    //         break;
    //     }
    //     cout<<x<<endl;
    // }
    // int n;
    // cin>>n;
    // for(int i=0; i<=n; i++){
    //     int y;
    //     cin>>y;
    //     if(y==42){
    //         break;
    //     }
    //     cout<<y<<endl;
    // }

    /*
    problem no 2
    your're given an integer N. write a program to calculate the sum of all the digits of N.
     
   input
   the first line contains an int T, the total number of testcases. then follow T lines, each line contains an int N.

   output
   for each test case ,calculate the sum og digits of N and display it in a new line.

   constraints
    1<=T<=1000
    1<=N<=1000000

    example
    input
    3
    12345
    31203
    2123

    output
    15
    9
    8
   */
    int t;
    cin>>t;
    while(t--){
   int n;
   cin>>n;
   int digit_sum=0;
   while(n>0){
    int last_digit = n%10;
    digit_sum =digit_sum+ last_digit;
    n = n/10;
   }
   cout<<digit_sum<<endl;
}

}