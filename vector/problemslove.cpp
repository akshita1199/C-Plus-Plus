#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

//reverse in function
// void reversevector(vector<int>num){
//     for(int i=num.size()-1; i>=0; i--){
//         cout<<num[i]<<endl;
//     }
// }

int main(){

    /*
    problem no 1
    #find a particular number

    example
    input
    5
    10 20 30 40 50
    30
    output
    found at index2

    */

    // int n;
    // cin>>n;
    // vector<int> num(n);
    // for(int &x :num){
    //     cin>>x;
    // }
    // int target;
    //cin>>target;
    // for(int i=0; i<num.size(); i++){
    //     if(num[i]==target){
    //         cout<<"found at index"<<" "<<i<<endl; 
    //         return 0;
    //     }
        
    //     }
        
    //         cout<<"not found"<<endl;

    /*
    problem no 2
    #reverse a vector
    example
    input
    5
    10 20 30 40 50
    output
    50 40 30 20 10
    */
    // int n;
    // cin>>n;
    // vector<int> num(n);
    // for(int &x:num){
    //     cin>>x;
    // }
    // int start=0;
    // int end=num.size()-1;
    // bool ans=true;
    // while(start<end){
    //     int temp=num[start];
    //     num[start]=num[end];
    //     num[end]=temp;
    //     start++;
    //     end--;
    // }
    // cout<<"reverse vector is"<<endl;
    // for(int i=0; i<num.size(); i++){
    //     cout<<num[i]<<" "<<endl;
    // }

    //second method
    // cout<<"reverse vector is "<<endl;
    // for(int i=num.size()-1; i>=0; i--){
    //     cout<<num[i]<<endl;
    // }

    //third method
    
    // reverse(num.begin(),num.end());
    // for(int i=0; i<num.size(); i++){
    //     cout<<num[i]<<endl;
    // }

    //forth method in function
    // reversevector(num);

    /*
    problem no 3
    #count odd number
    example
    input
    6
    3 5 12 7 6 8
    output
    3
    */

    // int n;
    // cin>>n;
    // vector<int>num(n);
    // for(int i=0; i<n; i++){
    //     cin>>num[i];
    // }
    // int count=0;
    // for(int i=0; i<num.size(); i++){
    //     if(num[i]%2!=0){
    //         count++;
        
    //     }
      
    // }
    //   cout<<count<<endl;

    /*
    problem no 4
    #count even number
    example
    input
    6
    3 5 12 7 6 8
    output
    3
    */
//    int n;
//    cin>>n;
//    vector<int>num(n);
//    for(int i=0; i<n; i++){
//     cin>>num[i];
//    }
//     int count=0;
//     for(int i=0; i<num.size(); i++){
//         if(num[i]%2==0){
//             count++;
//         }
//     }
   
//     cout<<count<<endl;

/*
problem no 5
#find smallest num
example
input
5
14 9 22 5 17
output
5
*/
    // int n; 
    // cin>>n;
    // vector<int>num(n);
    // for(int i=0; i<n; i++){
    //     cin>>num[i];
    // }
    // int smallest = INT_MAX;
    // for(int i=0; i<num.size(); i++){
    //     if(num[i]<smallest){
    //         smallest=num[i];
    //     }
    // }
    // cout<<smallest<<endl;

    /*
    problem no 6
    #largest number

    example
    input
    5
    14 9 12 5 17
    output
    17
    */

    // int n; 
    // cin>>n;
    // vector<int>num(n);
    // for(int i=0; i<n; i++){
    //     cin>>num[i];
    // }
    // int largest =INT_MIN;
    // for(int i=0; i<num.size(); i++){
    //     if(num[i]>largest){
    //         largest=num[i];
    //     }
    // }
    // cout<<largest<<endl;

    /*
    problem no 7
    #count occurences value

    example
    input
    6
    2 4 2 7 2 9
    2
    output
    3
    */

    // int n; 
    // cin>>n;
    // vector<int>num(n);
    // for(int i=0; i<n; i++){
    //     cin>>num[i];
    // }
    // int x;
    // cin>>x;
    // int count=0;
    // for(int i=0; i<num.size(); i++){
    //     if(num[i]==x){
    //         count++;
    //     }
    // }
    // cout<<count<<endl;

    /*
    problem no 8
    #reverse vector

    example
    input
    akshita
    output
    atihska
    */
//    int n;
//    cin>>n;
//    vector<char>ch(n);
//    for(int i=0; i<n; i++){
//     cin>>ch[i];
//    }
//    for(int i=ch.size()-1; i>=0; i--){
//     cout<<ch[i];
//    }

/*
problem no 9
#average of vector

example
input
4
10 20 30 40 
output
25
*/
// int n;
// cin>>n;
// vector<int>num(n);
// int sum=0;
// for(int i=0; i<n; i++){
//     cin>>num[i];
//     sum=sum+num[i];
// }
// cout<<sum/n;

/*
problem no 10
#sum of vector
example
input
5
1 2 3 4 5
output
15 
*/

// int n;
// cin>>n;
// vector<int>num(n);
// int sum=0;
// for(int i=0; i<n; i++){
//     cin>>num[i];
//     sum=sum+num[i];

//     }
//     cout<<sum;

/*
problem no 11
#liner search
example
input
5
10 20 30 40 50
30
output
found
*/

// int n; 
// cin>>n;
// vector<int>num(n);
// for(int i=0; i<n; i++){
//     cin>>num[i];
// }
// int target;
// cin>>target;
// for(int i=0; i<num.size(); i++){
//     if(num[i]==target){
//         cout<<"found"<<endl;
//         return 0;
//     }
// }
//     cout<<"not found"<<endl;

/*
problem no 12
#remove any element from vector
example
input
5
10 20 30 40 50
index 2
output
10 20 40 50

*/

// int n;
// cin>>n;
// vector<int>num(n);
// for(int i=0; i<n; i++){
//     cin>>num[i];
// }
// int index;
// cin>>index;
//     num.erase(num.begin()+index);
//     for(int i=0; i<num.size(); i++){
  
//     cout<<num[i]<<endl;
// }

/*
problem no 13
#sort a vactor

example
input
5
5 3 1 4 2
output
1 2 3 4 5
*/
// int n; 
// cin>>n;
// vector<int>num(n);
// for(int i=0; i<n; i++){
//     cin>>num[i];
// }
//     sort(num.begin(),num.end());
//     for(int i=0;i<num.size(); i++){
//     cout<<num[i];
//     }

/*
problem no 14
#unique element in vector
example
input
5
2 1 2 4 1
output
4
*/
    // int n; 
    // cin>>n;
    // vector<int>num(n);
    // for(int i=0; i<n; i++){
    //     cin>>num[i];
    // }
    // int ans=0;
    // for(int i=0; i<num.size(); i++){
    //     ans=ans^i;
    // }
    // cout<<ans<<endl;

    /*
    problem no 15
    #find second largest number

    example
    input
    5
    10 25 8 40 30
    output
    second largest = 30
    */
//    int n;
//    cin>>n;
//    vector<int>num(n);
//    for( int i=0; i<n; i++){
//     cin>>num[i];
//    }
//    int largest=num[0];
//    int second=-1;
//    for(int i=0; i<num.size(); i++){
//     if(num[i]>largest){
//         second=largest;
//         largest=num[i];
//     }
//     else if (num[i]>second && num[i]!=largest){
//         second=num[i];
//     }
//    }
//    cout<<"second largest"<<second;

/*
problem no 16
#remove all evennumbers
example
input
6
1 2 3 4 5 6
output
1 3 5
*/
// int n;
// cin>>n;
// vector<int>num(n);
// for(int i=0; i<n; i++){
//     cin>>num[i];
// }
// for(int i=0;i<num.size(); i++){
//     if(num[i]%2!=0){
//         cout<<num[i];
//     }
// }

/*
problem no 17
#remove odd number
example
input
6
1 2 3 4 5 6
output
2 4 6
*/
// int n;
// cin>>n;
// vector<int>num(n);
// for(int i=0; i<n; i++){
//     cin>>num[i];
// }
// for(int i=0; i<num.size(); i++){
//     if(num[i]%2==0){
//         cout<<num[i];
//     }
// }

}