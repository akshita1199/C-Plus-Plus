#include<iostream>
using namespace std;

   //class creation

    class Student {
        public:
        //proparties / data members
        int age;
        int weight;
        int height;
        string name;
        
        //behaviours / member functions
        void running(){
            cout<<"I am running"<<endl;

        }
        void studying(){
            cout<<name<<" is studying"<<endl;
    
        }
    };

    int main(){
        cout<<sizeof(Student)<<endl;

        //object creation

        //ststic way

        Student s1;
        s1.age=50;
        s1.name="abcd";
        s1.weight=50;
        s1.height=180;
        s1.running();
        

        //dynamic way

        Student* s = new Student;
        (*s).age=10;
        (*s).weight=60;
        (*s).height=190;
        (*s).running();
        (*s).name="abcd";
        (*s).studying();

        cout<<s->age<<endl;
        cout<<s1.age<<endl;


 
}