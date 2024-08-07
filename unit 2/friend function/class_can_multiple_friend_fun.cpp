/*
* WAP to illustrate the concept that a class can have multiple friend function */

#include<iostream>
#include<stdlib.h>
using namespace std;
class one {
    int n1, n2;
    public:
    void input();
    friend void display(one); //* 1st friend of class one
    friend void add(one); //* 2nd friend of class one
};
void one::input()  {
    cout<<"Enter the values for n1 & n2: ";
    cin>>n1>>n2;
}
void display(one o1) {
    cout<<"n1 = "<<o1.n1<<"\tn2 = "<<o1.n2<<endl;
}
void add(one o2) {
    int sum = 0;
    sum = o2.n1 + o2.n2;
    cout<<"Sum is: "<<sum;
}
int main() {
    system("cls");
    one o3;
    o3.input();
    display(o3); //* friend function is called
    add(o3); //* friend function is called
}
Output: Enter the values for n1 & n2: 10 5
n1 = 10 n2 = 5
Sum is: 15