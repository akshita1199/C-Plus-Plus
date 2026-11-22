


    /*
    //problem
   // given rectangle of length l and b. print area of rectnagle.
   
   //constraints:
   // 1<= l <= 10^9
   // 1<= b <= 10^9

   //input format
   // 2 space sperated integer l and b
   
   // output format
   // single number which is area of rectangle

   //sample input
   // 3 4

   //sample output
   // 12
   */
   /*

   problem no 2
   your are int N write program to calculate the sum of all the digits of N.

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


   #include<bits/stdc++.h>
   using namespace std;

   int main(){

    // long long int l,b;
    // cin>>l>>b;
    // cout<<l*b<<endl;

    // //second way
    // int o,p;
    // cin>>o>>p;
    // cout<<o * 1LL * p;

   //problem no 2
   int t;
   cin>>t;
   for(int i=0; i<t; i++){
    int n;
    cin>>n;
    int sum=0;
    while(n>0){
        sum += n % 10;
        n/=10;
    }
    cout<<sum<<endl;
    
    }



   }

   