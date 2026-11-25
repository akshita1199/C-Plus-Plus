#include<iostream>
#include<vector>
using namespace std;

int main(){
    /*
    //single number problem
    given a non-empty array of integers nums every element appears twice except for one.find that single one.
    you must implement a solution with a linear runtime complexity and use only constant extra space.

    example
    input
    4 1 2 1 2
    output
    4
    */
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int &x:nums)
    cin>>x;
     int ans=0;
   
    for(int val:nums){
        ans=ans^val;
        
    }
      cout<<ans<<endl;

      
}