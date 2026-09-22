#include<iostream>
#include<cstring>
using namespace std;

// find length

int getlength(char arr[]){
    int count =0;
    int index =0;
        while(arr[index]!='\0'){
            count++;
            index++;
        }
        return count;
}

    // concatenation
        void concatarray(char a[],char b[]){
            int aindex = getlength(a);
            int bindex = 0;
            while(b[bindex]!='\0'){
                // start coping
                a[aindex]=b[bindex];
                aindex++;
                bindex++;
            }
            // end a staring with null character
            a[aindex]='\0';
        }

        // copying
        void copyarray(char actualarr[],char copyarr[]){
            int aindex =0;
            int bindex =0;
                while(actualarr[aindex]!='\0'){
                    // starting copying
                    copyarr[bindex]=actualarr[aindex];
                    aindex++;
                    bindex++;
                }
                copyarr[bindex]='\0';
        }

            // comparison
            bool comparearray(char a[], char b[]){
                int aindex =0;
                int bindex =0;
                int alength = getlength(a);
                while(aindex <= alength){
                    if (a [aindex]!= b[bindex]){
                        return false;
                    }
                    else{
                        aindex++;
                        bindex++;
                    }}
                    // agar yaha tak programme run hora he iska matalb char match ho gaye
                    return true;
                
            }

int main(){

        // strcpy
        // char actual[]="AKSHITA";
        // char ans [100];
        // strcpy(ans,actual);

        //  cout<<ans<<endl;
        // strlen
        //  char actual[]="AKSHITA";
        //  char ans[100];
        //  cout<<"length of actual char array :"<<strlen(actual)<<endl;

        // strcmp

        // char actual[]="AKSHITA";
        // char ans[100];
        // cout<<"length of actual char array :"<<strlen(actual)<<endl;
        // strcpy (ans, actual);
        // cout<<ans<<endl;
        // ans not same
        // ans[0]='k';
        // if(strcmp(actual,ans)==0){
            // cout<<"char arrays are same"<<endl;
        // }
        // else{
            // cout<<"char arrays are not same"<<endl;
        // }

        // strcat
        char a[50]="AKSHITA";
        char b[50]="GINOYA";
        strcat(a,b);
        cout<<"printing a :"<<a<<endl;


        // comparison
        // char arr[]="abcde";
        // char brr[]="abcd";
        // cout<<comparearray(arr,brr)<<endl;

        // copying
        // char actual[100]="babbar";
        // char ans[100];
        // copyarray(actual,ans);
        // cout<<"printing ans array :"<<ans<<endl;

        // concatenation
        // char a[50]="akshita";
        // char b[50]="ginoya";
        // concatarray(a,b);
        // cout<<"printing a :"<<a<<endl;

    // find length
    // char arr[]="AKSHITA";
    // cout<<getlength(arr)<<endl;
    //declare
    // char arr[10];
    // cout<<arr[3]<<endl;

    // char arr[10]={"akshita"};
    // cout<<arr[3]<<endl;
    // cout<<"printing 6th index : "<<arr[6]<<endl;
    // cout<<"printing 7th index ; "<<arr[7]<<endl;
    // int asciivalue=arr[7];
    // cout<<asciivalue<<endl;

    // char arr[4];
    // arr[0] ='a';
    // arr[1] ='b';
    // arr[2] ='\0';
    // cout<<arr[0];

    // int crr[4] = {1,2,3,4};
    // cout<<crr<<endl;

    // char brr[5]="abcd";
    // cout<<brr<<endl;
        // for(int i=0; i<5; i++){
            // cout<<brr[i]<<" ";
        // }
    return 0;
}