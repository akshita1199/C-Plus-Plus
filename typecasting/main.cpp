#include <iostream>
using namespace std; 
int main(){
    // IMPLICIT CASTING
    // 1. int to float
        // int num1=10;
        // float num2=5.5;
        // float result=num1+num2; //implicit conversion of num1 from int to float
        // cout <<result<<endl;

    // 2.char to int
        // char ch='A';
        // int a =ch+1;  //implict conversion from char to int
        // cout<<a<<endl;

    // 3.int to char
        // int a=97;
        // char ch =a;  //impicit conversion from int to char
        // cout<<ch<<endl;

    // 4.char conversion value
        // char g='B';
        // int gg =g;
        // cout<<gg<<endl;

    //EXPLICIT CASTING
    //1. double to int
    // double pi=3.14159265;
    // int intpi=(int)pi;  //Explicit conversion from double to int
    // cout<<intpi<<endl;

    // 2. float to char
    // float floatingnumber = 65.35;
    // char charvalue =(char)floatingnumber; //Explicit conversion from flaot to char
    // cout<<charvalue<<endl;

    // 3.int to float
    int a=10;
    int b=3.0;
    float c=a/((float)b); //Explict conversion from int to float
    cout<<c<<endl;

        return 0;
}