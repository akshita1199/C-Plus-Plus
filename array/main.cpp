#include <iostream>
using namespace std;

    // function
    // void printarray(int arr[],int size){
        //printing
        // for(int index=0; index<=size-1; index++){
            // cout<<arr[index]<<" ";
        // }
    // }

    // 10table print
    // void storemultipleof10(int num[],int size){
    //     int count = 1;
    //     for(int index=0; index<=9; index++){
    //         num[index]=10*count;
    //         count++;
    //     }
    // }
    //     void printarray(int num[],int size){
    //         for(int index=0; index<size; index++){
    //             cout<<num[index]<<" ";            }
    //     }

    // print reserse

    void flipzeroone(int arr[],int size){
        for(int index=0; index<size; index++){
            if(arr[index]==1){
                arr[index]=0;
            }
            else{
                arr[index] = 1;
            }
        }
    }
     void printarray(int arr[],int size){
        for(int index=0; index<size; index++){
        cout<<arr[index]<<" ";}
     }


    int main(){

        //print 10table
        // int arr[10];
        // int size =10;
        // storemultipleof10(arr,size);
        // printarray(arr,size);

        // print reverse

        int arr[] = {1,1,0,0,0,0,1,0,1};
        int size = 8;
        cout<<"before : ";
        printarray(arr,size);
        cout<<endl;
        flipzeroone(arr,size);
        cout<<"after : ";
        printarray(arr,size);
        cout<<endl; 
                // int arr[]={10,20,30,40};
        // int size=4;
        // printarray(arr,size);

        //declaration
        // int ram[101];
        // int arr[11];

        //initilisation
        // int brr[5] = {10,20,30,40,50};
        
        // int multipleof2[10] = {2,4,6,8,10,12,14,16,18,20};
        // cout<<multipleof2[3]<<endl;

        // traverse
        // for (int index=0; index<=9; index++){
            // cout<<multipleof2[index]<<" ";
        // }

        //input in array
            // int arr[5];
            // for(int index=0; index<=4; index++){
                // cout<<"ENTER THE VALUE FOR ARR["<<index<<"]:";
                // cin>>arr[index];
                // cout<<endl;
            // }
                // for(int index=0; index<=4; index++){
                    // cout<<arr[index]<<" ";
                // }

                // traversing an arry
                // int arr[]={10,20,30,40,50};
                // int sum =0;
                // for(int index=0; index<=4; index++){
                    // sum=sum + arr[index];
                // }
                // cout<<"total sum:"<<sum<<endl;


    }