#include<iostream>
#include<climits>
// #include<vector>
using namespace std;

    int main(){
        // int nums[]={};
        // cout<<"nums =";
        // cin>>size;
        // int size ;
        // cout<<"size";
        // cin>>size;
        // int nums[100]={};
        // cout<<"nums ="<<size<<"numbers";
        // for(int i=0; i<size; i++){
            // cin>>nums[i];

        // }
        // int smallest = INT_MAX;
        // for (int i=0; i<size; i++){
            // if(nums[i]<smallest){
                // smallest=nums[i];
        // }
        // }
        // cout<<"smallest = "<<smallest<<endl;
        
        // print num
        // int size;
        // cout<<"enter size";
        // cin>>size;
        // int num[size];
        // cout<<"enter num";
        // for(int i=0; i<size; i++){
            // cin>>num[i];
        // }
        // for(int i=0; i<size; i++){
            // cout<<num[i];
        // }
        // cout<<endl;
        

        // sum  = average
        // int size;
        // cout<<"enter size";
        // cin>>size;
        // int num[size];
        // cout<<"enter num";
        // for(int i=0; i<size; i++){
            // cin>>num[i];
        // }
        // int sum=0;
        // for(int i=0; i<size; i++)
        //  sum=sum+num[i];            
        //  cout<<sum/size<<endl;

        // even number count

        // int size;
        // cout<<"enter size";
        // cin>>size;
        // int num[size];
        // cout<<"enter num";
        // for(int i=0; i<size; i++){
            // cin>>num[i];
        // }
        // int count =0;
        // for(int i=0; i<size; i++){
            // if(num[i]%2==0)
            // count++;        }
            // cout<<"result ="<<count;

            // reverse 

        //      int size;
        // cout<<"enter size";
        // cin>>size;
        // int num[size];
        // cout<<"enter num";
        // for(int i=0; i<size; i++){
        //     cin>>num[i];}
        //         // method 1            // cout<<"reverse array";
        //     // for(int i=size-1; i>=0; i--){
        //         // cout<<num[i];

        //         // method 2 while loop
        //         int start=0;
        //         int end = size-1;
            
        //         while(start<end){
        //         int temp=num[start];
        //         num[start]=num[end];
        //         num[end]=temp;
                
        //             start++;
        //             end--;
        //         }
        //             cout<<"reverse array :";

        //             for(int i=0; i<size; i++){
        //                 cout<<num[i]<<"  ";
        //             }
            

            // }

            // largest number
            // int size;
            // cout<<"enter size";
            // cin>>size;
            // int num[size];
            // cout<<"enter num";
            // for(int i=0; i<size; i++){
                // cin>>num[i];
                // int largest=INT_MIN;
                // for(int i=0; i<size; i++){
                    // if(num[i]>largest){
                        // largest=num[i];
                    // }
                // }
                // cout<<largest<<endl;
            // }

            //array delaration
            int size;
            cin>>size;
            int a[size];
            for(int i=0; i<size; i++) {
                cin>>a[i];
            }
            int sum=0;
            for(int i=0; i<size; i++){
                sum=sum+a[i];
            }
            cout<<sum<<endl;
        return 0;
    }