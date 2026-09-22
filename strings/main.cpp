#include <iostream>
#include<string>
#include<algorithm>
using namespace std;


int main(){
    // decalre
    // string name;
    // name.push_back('a');
    // name.push_back('b');
    // name.push_back('c');
    // cout<<name<<endl;


    // initialisation
    // string surname = "ginoya";

    // updation
    // surname = "tapasiya";

    // s.length
    // string str ="AKSHITA";
    // cout<<"length:"<<str.length()<<endl;

    // s.append
    // string str="akshita";
    // string temp="ginoya";
    // str.append(temp);
    // cout<<str<<endl;

    // insert(pos ,t)
    // string str="akshita";
    // string temp="ginoya";
    // str.insert(0,temp);
    // cout<<str<<endl;

    // substr(pos , len)
    // string str ="statement";
    // cout<<str.substr(5,4)<<endl;

    // compare
    // string a = "abcd";
    // string b = "abcde";
    // if(a.compare(b)==0){
        // cout<<"string are equal"<<endl;
    // }
    // else{
        // cout<<"string are not equal"<<endl;
    // }

    // find (ty,pos)
    // 1.ex
    // string a= "my name is akshita ginoya";
    // (index number find kare)
    // string b ="akshita";
    // cout<<a.find(b)<<endl;

    // 2.ex

    // string a="my name is akshita ginoya";
    // string b="akshitaa";
    // int ans = a.find(b);
    // if(ans==string :: npos){
        // cout<<"b string not found in a string "<<endl;
    // }
    // else{
        // cout<<"found"<<endl;
    // }

    // reserve strings

    // string str ="AKSHITA";
    // reverse(str.begin(),str.end());
    // cout<<str<<endl;

    // palindrome string

    string str = "MADAM";
    string rev = str;

    reverse(rev.begin(),rev.end());
     if(str==rev){
        cout<<"PALINDROME";
     }
     else{
        cout<<"PILIMDROME NOT"
     }



    return 0;
}