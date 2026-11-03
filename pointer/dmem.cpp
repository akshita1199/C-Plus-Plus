#include<iostream>
using namespace std;


int main(){

    // dynamic memory
    // new
    // int *ptr=new int;
    // *ptr=5;
    // cout<<*ptr<<endl;
    // // delete ptr
    // delete ptr;
    // cout<<*ptr<<endl;

    // array
    // int *ptr=new int[5];
    // ptr[0]=10;
    // ptr[1]=20;
    // ptr[2]=30;
    // ptr[3]=40;
    // *(ptr+4)=50;
    // *(ptr+5)=60;

    // for(int i=0;i<5; i++){
    //     cout<<ptr[i]<<endl;
    // }

    // delete []ptr;
    //     cout<<ptr<<endl;


    // cin

int size;
cout << "enter size = ";
cin >> size;

int *arr = new int[size];

// fill the array
for (int i = 0; i < size; i++) {
    cout << "enter element " << i << ": ";
    cin >> arr[i];
}

// print the array
for (int i = 0; i < size; i++) {
    cout << arr[i] << endl;
}

delete[] arr;
arr = nullptr;

}