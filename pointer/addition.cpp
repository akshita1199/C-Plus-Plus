#include<iostream>
using namespace std;

int main(){

    // int
    int *ptr=new int[5];
    ptr[0]=10;
    ptr[1]=20;
    ptr[2]=30; 
    ptr[3]=40;
    ptr[4]=50;
    cout<<*(ptr+1)<<endl;  //location print *(ptr+1) 0 index+1 index =1 index =20value
    cout<<*ptr+1<<endl;    //value print *ptr+1  10+1=11

    // char
    
    char *str=new char[5];
    str[0]='a';
    str[1]='b';
    str[2]='c';
    str[3]='d';
    str[5]='e';
    cout<<*(str+1)<<endl;  //location print *(str+1) 0 index+1 index=1 index= b value 
    cout<<(char)(*str+1)<<endl;    //value print *str+1  a+1 = b

    // cin element

    int size;
    cout<<"enter size =";
    cin>>size;
    int *arr=new int[size];

    for(int i=0; i<size; i++){
        cout<<"enter element "<<i<<"=";
        cin>>arr[i];
    }
      

    for(int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }

    cout<<*(arr+1)<<endl;  //location ans=20
     cout<<(*arr+1)<<endl; //value 10+1=11

}