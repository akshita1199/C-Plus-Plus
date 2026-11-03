#include<iostream>
using namespace std;

int main(){


    int a = 10;
    char c = 'x';
    double d = 3.5;

    void *p;

    p = &a;                              // holds an int's address
    cout << *(int*)p << endl;            // 10

    p = &c;                              // same pointer, now a char's address
    cout << *(char*)p << endl;           // x

    p = &d;
    cout << *(double*)p << endl;         // 3.5
    return 0;
}
