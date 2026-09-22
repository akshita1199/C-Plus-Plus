#include <iostream>
using namespace std;

// int getmultiplication(int x,int y,int z){

    // int result = x*y*z;
    // return result;
// }

// void printmynametentimes(){
    // for(int i=1; i<=10; i++){
        // cout<<"AKSHITA"<<endl;
    // }
// }

// void printmultiples(int num){
    // for(int i=1; i<=10; i++){
        // cout<<num*i<<endl;
    // }
// }

// int convertintocelcius(int far){
    // int celcius = (far - 32)*5/9;
    // return celcius;
// }

// char convertintouppercase(char ch){
    // char answer = ch-'a'+'A';
    // return answer;
// }

// int main(){
    // function call

    // int multiplicationanswer = getmultiplication(5,4,3);
    // cout <<multiplicationanswer<<endl;

    // printmynametentimes();

    // int m = 5;
    // printmultiples(m);


    // int far = 32;
    // int ans = convertintocelcius(far);
    // cout<< "in celcius:"<<ans<<endl;

    // char result = convertintouppercase('k');
    // cout<<result<<endl;


// }


// home work
    //1 to 100 print
    void printnumbers(){
        for (int i=1; i<=100; i++){
            cout<<i<<"  ";
        }
    }

    //simple interest
    void simpleintrest(){
        float p,r,t,si;
        cout<<"enter p";
        cout<<"enter r";
        cout<<"enter t";
        cin>>p;
        cin>>r;
        cin>>t;
        si = (p*r*t)/100;
        cout<<"simpleinterest="<<si; 
    }

    //prime number 1 to 100
        bool isprime(int n){
            if(n<2)
                return false;
                for(int i=2; i<n; i++){
                    if(n%i==0)
                    return false;
                }
                return true;
        }

    // voting or not voting
        void checkvote(int age){
            if(age>=18)
            cout<<"eligible for voting";
            else cout<<"not eligible for voting ";
        }
        

    int main(){
        //1 to100
        // printnumbers();

        //simpleinteret
        // simpleintrest();
    
        // prime number 1 to 100
        // for(int i=1;i<=100; i++){
            // if(isprime(i))
            // cout<<i<<" ";
        // }

        // voting or not voting
        int age;
        cout<<"enter age";
        cin>>age;
            checkvote(age);
        return 0;
    }
