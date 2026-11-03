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
    //no parameter constructor
    student(){
    cout<<"I am no parameter constructor"<<endl;
    this->age=10;
    this->weight=15;
    this->height=50;
    this->name="chikoo";
    }
    ~student(){
        cout<<"I am inside destructor"<<endl;
    }
};
int main(){
    student* o=new student();
    delete o;


}