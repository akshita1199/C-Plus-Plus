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
    // string a="madam";
    // string rev=a;
    // reverse(rev.begin(),rev.end());
    // if(a==rev){
        // cout<<"palindrome"<<endl;
    // }
    // else{
        // cout<<"not palindrome"<<endl;
    // }

    // print

    // string a;
    // cout<<"enter a";
    // cin>>a;
    // cout<<a;

    // length
    // string a;
    // cout<<"enter a";
    // cin>>a;
    // cout<<a.length();

    // reverse

    // string a;
    // cout<<"enter a";
    // cin>>a;
    // int start =0;
    // int end=a.length()-1;
    // while(start<end){
        // int temp=a[start];
        // a[start]=a[end];
        // a[end]=temp;
        // start++;
        // end--;
    // }
    // cout<<a;
    
    
    // vowels count
    // string a;
    // cout<<"enter a";
    // cin>>a;
    //  int count =0;
    //  for(char ch :a){
        // if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        // count++;
    //  }
    //  cout<<count;

    // palindrome

    // string a;
    // cout<<"enter a";
    // cin>>a;
    // int start=0;
    // bool ans =0;
//    int end =a.length()-1;
//    while(start<end){
    // if(a[start]==a[end]){
        // ans=true;
        
//    }
//    else{
    // ans=false;
    
    // break;
//    }
//    start++;
//    end--;
// }
// if(ans){
    // cout<<"palindrome";
// }
// else{
    // cout<<"not palindrome";
// }
// cout<<endl;


// count word

string a;
cout<<"enter a";
getline(cin,a);

string b;
cout<<"enter b";
getline(cin,b);

 int count=0;
 for(int i=0; i<=b.length(); i++){
    if(a.find(b)!=string::npos){
        count++;
    }
 }
 cout<<count<<endl;
    return 0;
}