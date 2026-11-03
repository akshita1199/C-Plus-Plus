#include<iostream>
using namespace std;

int main(){

    // //int
    int arr[5]={10,20,30,40,50};
    int *p1=&arr[3];
    int *p2=&arr[4];
    int *p3=&arr[3];

    // //==
    cout<<(*p1==*p2)<<endl;   //ans=0  difference adderess is ans false==0
    // //=!
    cout<<(*p1!=*p2)<<endl;  //ans=1  difference address is ans is true==1
    // //==
    cout<<(*p1==*p3)<<endl;  //ans=1  address same ans is true =1
                                  
    //address comparison
    
    //  <                            //address comparison
    cout << (p1 < p2) << endl;    // 1 (p1 is p2 less than ans true =1
    //  >
    cout << (p1 > p2) << endl;    // 0 (p1 is p2 less than ans false =0)
    //  >=
    cout << (p2 >= p1) << endl;   // 1 (p2 is p1 greter than equal ans true =1)
    //  <=
    cout << (p1 <= p2) <<endl;    // 1 (p1 is p2 less than equal ans true =1)

    //value comparison
    cout<<(*p1<*p2)<<endl;    //1(30<40)true =1
    cout<<(p1==p3)<<endl;     //1(address same )=1
    cout<<(*p2>*p1)<<endl;    // 1 (40>30)true =1
    cout<<(*p1!=*p2)<<endl;   // 1
    cout<<(p1!=p2)<<endl;     //1
    cout<<(*p3!=*p1)<<endl;   //0
    // //value comparison
    // int a=5;
    // int b=5;
    // int *x=&a;
    // int *y=&b;
    // cout<<(*x==*y)<<endl;  //same value =ans true=1
    // cout<<(x==y)<<endl;    //difference address ans false =0

    // //cin element
    // int y;
    // cout<<"enter y =";
    // cin>>y;
    // int z;
    // cout<<"enter z =";
    // cin>>z;

    // int *p=&y;
    // int *q=&z;
    // cout<<(*p==*q)<<endl;  //ans=1
    // cout<<(p==q)<<endl;    //ans=0

}