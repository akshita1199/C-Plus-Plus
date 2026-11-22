#include <iostream>
using namespace std;

int main(){
    // decalre
    // int arr[5][4];

    // initialisation
    // int arr[2][4]={{1,2,3,4},
                //   {5,6,7,8}};
    // cout<<arr[0][3]<<endl;

    // int arr[3][4]{{10,20,30,40,},
                //   {11,12,13,14,},
                //   {21,22,23,24}};
    // int arr[3][4];
    // int row=3;
    // int col=4;

    // printing
    // for(int row_index=0; row_index<=row-1; row_index++){
    //     for(int col_index=0; col_index<=col-1; col_index++){
    //         cout<<"Enter the value for arr["<<row_index<<"]["<<col_index<<"] :]";

    //         cin>>arr[row_index][col_index];
    //     }
    //     cout<<endl;
    // }

    //2d array
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int row=0; row<n; row++){
        for(int col=0; col<m; col++){
            cin>>a[row][col];
            
        }
    
    }
      for(int row=0; row<n; row++){
        for(int col=0; col<m; col++){
            cout<<a[row][col]<<" ";
    
        
    }
    cout<<endl;
}
}