#include<iostream>
using namespace std;

int main(){
        // * patterns
    // square
    // int n=4;
    // for(int row=1; row<=n; row++){
    //     for(int col=1; col<=n; col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // right triangle
    // int n=4;
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<row+1; col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    // inverted triangle 
    // int n=4; 
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<n-row; col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // right side triangle
    // int n=4;
    // for(int row=0; row<n; row++){
    //     // space
    //     for(int col=0; col<=n-row-1; col++){
    //         cout<<" ";
    //     }
    //     // * print
    //     for(int col=0; col<row+1; col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

            // num patterns

        // right triangle
    // int n=4;
    // int num=1;
    // for(int row=0; row<n; row++){
    //     for(int col=1; col<=row+1; col++){
    //         cout<<col;
    //         num++;
    //     }
    //     cout<<endl;
    // }
    // different number
    // int n=4;
    // int num=1;
    // for(int row=0; row<n; row++){
    //     for(int col=0;col<=row; col++){
    //         cout<<num;
    //         num++;
    //     }
    //     cout<<endl;
    // }

    // inverted different num
    // int n=4;
    // for(int row=0; row<n; row++){
    //     for(int col=n-row; col>0; col--){
    //         cout<<col;
    //     }
    //     cout<<endl;
    // }
     
    // same number
    // int n=4; 
    // for(int row=1; row<=n; row++){
    //     // space
    //     for(int col=0; col<=row; col++){
    //         cout<<" ";
    //     }
    //     // num print
    //     for(int col=n; col>=row; col--){
    //         cout<<row;
    //     }
    //     cout<<endl;
    // }

    // num pyramid

    // int n=4;
    // for(int row=0; row<=n; row++){
    //     // space
    //     for(int col=1; col<=n-row-1; col++){
    //         cout<<" ";
    //     }
    //     // num print
    //     for(int col=1; col<=row+1; col++){
    //         cout<<col;
    //     }
    //     // 2 num print
    //     for(int col=row; col>0; col--){
    //         cout<<col;
    //     }
    //     cout<<endl;
    // }

    // different num pyramid
    //  int n=4;
    // for(int row=1; row<=n; row++){
    //     // space
    //     for(int col=1; col<=n-row-1; col++){
    //         cout<<" ";
    //     }
    //     // num print

    //     for(int col=1; col<=2*row-1; col++){
    //         cout<<col;
    //     }
    //       cout<<endl; 
    //      }

        // same num triangle
        // int n=4;
        // for(int row=0; row<=n; row++){
        //     // space
        //     for(int col=1; col<=row+1; col++){
        //         cout<<row+1;
        //     }
        //        cout<<endl;
        // }
           
            // same num pyramid
            // int n=4;
            // int num=1; 
            // for(int row=0; row<=n; row++){
            //     // space
            //     for(int col=1; col<=n-row-1; col++ ){
            //         cout<<" ";
            //     }
            //     // num print
            //     for(int col=1; col<=2*row-1; col++){
            //         cout<<row;
                    
            //     }
            //     cout<<endl;
            // }

            // inverted triangle
            // int n=4;
            // for(int row=n; row>=1; row--){
            //     for(int col=1; col<=row; col++){
            //         cout<<col;
            //     }
            //     cout<<endl;
            // }

            // space with inverted 
        //     int n=4; 
        //     for(int row=0; row<=n; row++){
        //         // space
        //         for(int col=0; col<=row; col++){
                    
        //         cout<<" ";
        //         }
            
        //     //  num print
        //     for(int col=1; col<=n-row; col++){
        //         cout<<col;
        //     }
        //     cout<<endl;
        // }
            // same num reverse triangle
            int n=4;
            for(int row=n; row>=1; row--){
                for(int col=n-1; col>=row; col--){
                    cout<<row;
                }
                cout<<endl;
            }
     }
