#include <iostream>
using namespace std;

int main(){

    // subtraction
    //int


    //  int *ptr=new int[5];
    // ptr[0]=10;
    // ptr[1]=20;
    // ptr[2]=30; 
    // ptr[3]=40;
    // ptr[4]=50;
    // cout<<*(ptr-1)<<endl;  //location print *(ptr+1) 0 index-1 index =0 index =garbage value
    // cout<<*ptr-1<<endl;    //value print *pte-1=10-1=9

    
    // // char
    
    // char *str=new char[5];
    // str[0]='o';
    // str[1]='p';
    // str[2]='q';
    // str[3]='r';
    // str[5]='s';
    // cout<<*(str-1)<<endl;  //location print *(str-1) 0 index-1 index=-1 index= garbeg value 
    // cout<<(char)(*str-1)<<endl;    //value print *str-1  0-1 = n

    // // cin element

    // int size;
    // cout<<"enter size =";
    // cin>>size;
    // int *arr=new int[size];

    // for(int i=0; i<size; i++){
    //     cout<<"enter element "<<i<<"=";
    //     cin>>arr[i];
    // }
      

    // for(int i=0; i<size; i++){
    //     cout<<arr[i]<<endl;
    // }

    // cout<<*(arr-1)<<endl;  //location ans=
    //  cout<<(*arr-1)<<endl; //value 10-1=9

        // different
     int arr[5]={10,20,30,40,50};
     int *ptr=&arr[4];  //4=50
     int *qtr=&arr[1];  //1==20
     cout<<*ptr<<endl;   //value =50 ans =50
     cout<<*ptr-1<<endl;   //50-1 =49 ans =49 value 
     

     // 1. pointer - number: moves backward
    cout << *(ptr - 1) << endl;   // 40  ( 4 index-1 =3 index = 40 ans=40 3 index value
     cout << *(ptr - 2) << endl;   // 30 (4 index -2 =2 index =30 ans =30 2 index value)

    // 2. pointer - pointer: number of elements between them
    cout << ptr - qtr << endl;      // 3 (4 index - 1 index =3 index)
    cout << qtr - ptr << endl;      // -3 (1 index -4 index =-3 index)

    // 3. address vs value
    cout << *ptr - *qtr << endl;    // 30 (values: 50 - 20)
    cout << *qtr - *ptr << endl;    //-30 (value: 20-50)
}