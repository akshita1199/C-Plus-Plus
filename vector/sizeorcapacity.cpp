#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    cout<<vec.size()<<endl;  //3
    cout<<vec.capacity()<<endl;  //4
}