/*
* WAP to illustrate the concept that a function can be friend of multiple classes */

#include<iostream>
#include<stdlib.h>
using namespace std;
class two; //* forward declaration of a class
class one {
    int n1;
    public:
    void input();
    friend void add(one, two); //* friend of class one
};
void one::input()  {
    cout<<"Enter the values for n1: ";
    cin>>n1;
}
class two {
    int n2;
    public:
    void input();
    friend void add(one, two); //* friend of class two
};
void two::input() {
    cout<<"Enter the values for n2: ";
    cin>>n2;
}
void add(one o1, two t1) {
    int sum = 0;
    sum = o1.n1 + t1.n2;
    cout<<"Sum is: "<<sum;
}
int main () {
    system("cls");
    one o2;
    o2.input();
    two t2;
    t2.input();
    add(o2, t2); //* friend function is called
}
