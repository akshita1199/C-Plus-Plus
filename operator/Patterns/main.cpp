#include<iostream>
using namespace std;

int main (){


    // square pattern
    // int n = 4;
    // for(int i=1; i<=n; i++){
        // for( int j=1; j<=n; j++){
            // cout << j 
            // << " " ;
        // }
        // cout << endl;
    // }
// for(int i=1; i<=n; i++){

    // for (int j=1; j<=n; j++){
        // cout <<  " * ";
    // }
    // cout<<endl;
// }
// for(int i=0; i<n; i++){
    // char ch = 'A';
    // for(int j=0; j<n; j++){
        // cout<< ch << "  ";
        // ch= ch+1; // char+int
    // }
    // cout<<endl;
// }
// int n =5;
// int num =1;
// for(int i=0; i<n; i++){
    // for(int j=0; j<n; j++){
        // cout<< num << "  ";
                // num ++;
    // }
    // cout<<endl;
// }



//    int n=5;
//    char ch='A';
    // for(int i=0; i<n; i++){
        // for(int j=0; j<n; j++){
            // cout<<ch << "  ";
            // ch ++;
            
        // }
        // cout<<endl;
    // }
    // cout<<endl;


    // traingle pattern
    // easy with stars
        // int n=4;
            // for(int i=0; i<n; i++){
                // for(int j=0; j<i+1; j++){   //its (i+1) impoetant
                    // cout<<"* ";

                // }
                // cout<<endl;
            // }

            // easy with numbers
            // int n=4;
                // for(int i=0; i<n; i++){
                    // for(int j=0; j<i+1; j++){
                        // cout<<i+1<<" ";
                    // }
                    // cout<<endl;
                // }

                // easy with ch
                // int n=4;
                // char ch='a';
                    // for(int i=0; i<n; i++){
                        // for(int j=0; j<i+1; j++){
                            // cout<<ch<<" ";
                            
                        // }
                        // cout<<endl;
                        // ch++;
                    // }
                  
                    // anothee tringle pattern
                    // int n=4;
                    // for(int i=0; i<n; i++){
                        // for(int j=1; j<=i+1; j++){
                            // cout<<j<<" ";
                        // }
                        // cout<<endl;
                    // }
                    // easy with ch
                    // int n=4;
                    //    for(int i=0; i<n; i++){
                            // char ch='a';
                            // for(int j=0; j<=i; j++){
                                // cout<<ch<<" ";
                                // ch++;                            
                            // }
                        // cout<<endl;
                        // }

                    // reverse tringle pattern
                    // int n=4;
                        // for(int i=0; i<n; i++){
                            // for(int j=i+1; j>0; j--){
                                // cout<<j<<" ";
                            // }
                            // cout<<endl;
                        // }

                        // reverse with ch 
                        // int n=4;
                        
                            // for(int i=0; i<n; i++){
                                // char ch='a'+i;
                                // for(int j=i+1; j>0; j--){
                                    // cout<<ch<<" ";
                                    // ch--;
                                // }
                                // cout<<endl;
                            // }

                        // floyed's triangle pattern
                            // int n=4;
                            // int num=1;
                                // for(int i=0; i<n; i++){
                                    // for(int j=i+1; j>0; j--){
                                        // cout<<num<<" ";
                                        // num++;
                                    // }
                                    // cout<<endl;
                                // }
                                // floyed's triangle with ch
                                // int n=4;
                                // char ch='a';
                                    // for(int i=1; i<=n; i++){
                                        // for(int j=1; j<=i; j++){
                                            // cout<<ch<<" ";
                                            // ch++;
                                        // }
                                        // cout<<endl;

                                    // }
                                // inverted triangle pattern
                                // int n=4;
                                // int num=1;
                                    // for(int i=0; i<n; i++){
                                        // spaces
                                        // for(int j=0; j<i; j++){
                                            // cout<<" ";
                                        // }
                                        // numbers
                                        // for(int j=0; j<n-i; j++){
                                            // cout<<(i+1);
                                        // }
                                        // cout<<endl;
                                    // }
                                // with ch
                                    
                                  for(int i=1; i<=4; i++){
                                  char ch='a';
        // spaces
        for(int j=1; j<i; j++){
            cout << " ";
        }

        // characters
        
        for(int j=i; j<=4; j++){
            cout << ch;
            ch++;
        }
        cout << endl;
    }
                                     

    return 0;
 
}