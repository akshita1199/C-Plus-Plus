#include<iostream>
#include<vector>
using namespace std;

int main(){
    //vector input 
    // int n;
    // cin>>n;
    // vector<int> v(n);
    
    // for(int &x:v)
    // cin>>x;
    
    // for(int x:v)
    
    // cout<<x<<endl;

    // //size of vector
    // vector<char>vec={'a','b','c','d'};
    // cout<<vec.size()<<endl;

    // //push_back()function
    // vector<int>vec1;
    // cout<<vec1.size()<<endl;  //size=0
    // vec1.push_back(10);
    // vec1.push_back(20);
    // vec1.push_back(30);
    // cout<<vec1.size()<<endl; //size=3
    // for(int val:vec1){
    //     cout<<val<<endl;    //value=10 20 30
    // }

    // //pop_back()function
    // vec1.pop_back(); //30 delate
    // cout<<vec1.size()<<endl; //size=2

    // //front
    // cout<<vec1.front()<<endl; //10

    // //back
    // cout<<vec1.back()<<endl; //20

    // //at
    // cout<<vec1.at(1)<<endl; //20
    // cout<<vec1.at(0)<<endl; //10


    //all 
    int n;
    cin>>n;
    vector<int>vec2(n);
    for(int &x:vec2)
    cin>>x;
    for(int x:vec2)
    cout<<x<<endl;
    // vector<int>vec2={10,20,30,40,50};
    //size
    cout<<vec2.size()<<endl; //5
    //push_back
    vec2.push_back(60);
    cout<<vec2.size()<<endl; //6
    //pop_back
    vec2.pop_back();
    cout<<vec2.size()<<endl; //5
    //front
    cout<<vec2.front()<<endl; //10
    //back
    cout<<vec2.back()<<endl; //50
    //at
    cout<<vec2.at(3)<<endl;  //40 


}