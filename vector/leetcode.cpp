#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    /*
    problem no 1
    #target equal number
    You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input:
vector<int> nums = {2, 7, 11, 15};
int target = 9;


Output: [0,1]
    */

    // int n;
    // cin>>n;
    // vector<int>nums(n);
    // for(int i=0; i<n; i++){
    //     cin>>nums[i];
    // }
    // int target;
    // cin>>target;
    // for(int i=0; i<nums.size(); i++){
    //     for(int j=i+1; j<nums.size(); j++){
    //         if(nums[i]+nums[j]==target){
    //              cout<<i<<" "<<j<<endl;
    //         }
    //     }
    // }
    /*
    problem no 2
    #median of numbers
    Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

 

Example 1:

Input:
vector<int> nums1 = {1, 3};
vector<int> nums2 = {2};

Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
    */
// int n;
// cin>>n;
// vector<int>nums1(n);
// for(int i=0; i<n; i++){
//     cin>>nums1[i];
// }
// int m;
// cin>>m;
// vector<int>nums2(m);
// for(int i=0; i<m; i++){
//     cin>>nums2[i];
// }
// vector<int>c;
// int i=0;
// int j=0;
// for(int k=0; k<n+m; k++){
//     if(i<n&&j<m){
//         if(nums1[i]<nums2[j]){
//             c.push_back(nums1[i]);
//             i++;
//         }
//         else{
//             c.push_back(nums2[j]);
//             j++;
//         }
//     }
//     else if(i<n){
//         c.push_back(nums1[i]);
//         i++;
//     }
//     else{
//         c.push_back(nums2[j]);
//         j++;
//     }
// }
// for(int k=0; k<c.size(); k++){
//     cout<<c[k]<<" ";
// }
// int size=c.size();
// if(size%2==1){
//     cout<<c[size/2];
// }
// else{
//     cout<<(c[size/2-1]+c[size/2])/2.0;
// }
/*
problem no 3
#Container With Most Water
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.
example
Input:
vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

Output: 49
*/
// int n;
// cin>>n;
// vector<int>height(n);
// for(int i=0; i<n; i++){
//     cin>>height[i];
// }
// int maxarea=0;
// for(int i=0; i<n; i++){
//     for(int j=i+1; j<n; j++){
//         int h=min(height[i],height[j]);
//         int w=j-i;
//         int area=h*w;
//         if(area>maxarea){
//             maxarea=area;
//         }
//     }
// }
// cout<<maxarea<<endl;

/*
problem no 4
#missing number
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

 

Example 1:

Input: nums = [3,0,1]

Output: 2
*/
// int n;
// cin>>n;
// vector<int>nums(n);
// for(int i=0; i<n; i++){
//     cin>>nums[i];
// }
// int result = nums.size();
// for(int i=0; i<nums.size(); i++){
//     result = result ^ i ^ nums[i];
    
// }
//     cout<<result<<endl;
//     return 0;

/*
problem no 5
#remove element
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
Return k.
Example 1:

Input:
vector<int> nums = {3, 2, 2, 3};
int val = 3;

Output: 2, nums = [2,2,_,_]
*/

// int n;
// cin>>n;
// vector<int>nums(n);
// for(int i=0; i<n; i++){
//     cin>>nums[i];
// }
// int val;
// cin>>val;
// int k=0;
// for(int i=0; i<nums.size(); i++){
//     if(val!=nums[i]){
//         nums[k]=nums[i];
//         k++;
//     }

    
//     for(int j=0; j<k; j++){
        
//     }
    
// }
// cout<<k<<endl;

/*
problem no 6
#dublicate number
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

 

Example 1:

Input:
vector<int> nums = {1, 2, 3, 1};


Output: true
*/
int n; 
cin>>n;
vector<int>nums(n);
for(int i=0; i<n; i++){
    cin>>nums[i];
}
sort(nums.begin(),nums.end());
for(int i=1; i<nums.size(); i++){
    if(nums[i]==nums[i-1]);
    cout<<"true"<<endl;
    return 0;
}
    cout<<"false"<<endl;
    return 0;
}

