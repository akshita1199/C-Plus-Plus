#include<iostream>
using namespace std;

class student{
    public:
    //proparties
    int age;
    int weight;
    int height;
    string name;

    //constructor create
    // no parameter constructor
    student(){
        cout<<"I am no parameter constructor "<<endl;
      this-> age=3;
      this-> weight=15;
      this-> height=45;
      this-> name="dammy";
    }

    //parameter constructor
    student(int myage, int myweight, int myheight,string myname){
        cout<<"I am inside parameter constructor "<<endl;
        age=myage;
        height=myheight;
        weight=myweight;
        name=myname;

    }

};
int main(){

    student a;
     cout<<a.age<<endl;
    student b(5,10,30,"pammy");
    cout<<b.age<<endl;
    student* x=new student();
    cout<<x->age<<endl;
    student* y=new student(10,20,30,"banty");
    cout<<"age ="<<y->age<<endl;


}