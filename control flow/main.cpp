#include<iostream>
using namespace std;

int main() {
// int budget;
// cout <<"enter your budget:" << endl;

// input 
// cin >>budget;
 
// if(budget > 2000000){
    // cout << "you can buy scorpio"<< endl;
// }
// else{
    // cout <<"you can not buy scorpio"<< endl;
// }

// int marks = 55;
// if (marks > 90){
//     cout <<"A" << endl;
//     }
//     else if(marks > 80){
//         cout << "B" << endl;
//     }
//     else if(marks >70){
//         cout << "C" << endl;
//     }
//     else if (marks > 60){
//         cout << "D" << endl;
//     }
//     else{
//         cout << "you failed";
//     }

   int height;
   cout << "enter height in feet" << endl;
   cin >> height;
   int weight;
   cout << "enter your weight:"<< endl;
   cin >> weight;
   if (height > 5){
    if (weight >70){
        cout << "you got a good BMI"<<endl;
    }
    else{
        cout<< "not good BMI"<< endl;
    }   
}
else {
    cout<<"complain" << endl;
}





    return 0;
}